#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>

class InitConfig {

    public:
        using Section = std::unordered_map<std::string, std::string>;
        std::unordered_map<std::string, Section> data;

        bool load(const std::string& filename) {
            std::ifstream file(filename);
            if(!file.is_open()) return false;

            std::string line, current_section;
            while (std::getline(file, line)) {
                auto comment_pos = line.find_first_of("#;");
                if(comment_pos != std::string::npos)
                    line = line.substr(0, comment_pos);
                
                // Trim whitespace
            line.erase(0, line.find_first_not_of(" \t\r\n"));
            line.erase(line.find_last_not_of(" \t\r\n") + 1);

            if (line.empty()) continue;

            if (line.front() == '[' && line.back() == ']') {
                current_section = line.substr(1, line.size() - 2);
            } else {
                size_t eq = line.find('=');
                if (eq != std::string::npos) {
                    std::string key = line.substr(0, eq);
                    std::string value = line.substr(eq + 1);
                    // Trim whitespace
                    key.erase(0, key.find_first_not_of(" \t\r\n"));
                    key.erase(key.find_last_not_of(" \t\r\n") + 1);
                    value.erase(0, value.find_first_not_of(" \t\r\n"));
                    value.erase(value.find_last_not_of(" \t\r\n") + 1);

                    data[current_section][key] = value;
                }
            }
        }
        return true;
    }

    std::string get(const std::string& section, const std::string& key, const std::string& def = "") const {
        auto sec_it = data.find(section);
        if (sec_it != data.end()) {
            auto key_it = sec_it->second.find(key);
            if (key_it != sec_it->second.end())
                return key_it->second;
        }
        return def;
    }

    void set(const std::string& section, const std::string& key, const std::string& value) {
        data[section][key] = value;
    }

    bool save(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file.is_open()) return false;

        for (const auto& [section, entries] : data) {
            file << "[" << section << "]\n";
            for (const auto& [key, value] : entries) {
                file << key << "=" << value << "\n";
            }
            file << "\n";
        }

        return true;
    }


};

#endif // PARSER_H