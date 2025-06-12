#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <std_srvs/srv/empty.hpp>

#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

#include <fstream>
#include <filesystem>



class PointLabeler : public rclcpp::Node {
    std::ofstream point_log_;
public:
    PointLabeler() : Node("point_labeler") {
        cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "/points/xyzrgba", 10,
            std::bind(&PointLabeler::cloud_callback, this, std::placeholders::_1));

        click_sub_ = this->create_subscription<geometry_msgs::msg::PointStamped>(
            "/clicked_point", 10,
            std::bind(&PointLabeler::click_callback, this, std::placeholders::_1));

        label_pub_ = this->create_publisher<std_msgs::msg::Int32MultiArray>("/labeled_points", 10);
        marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("/visualization_marker", 10);

        reset_srv_ = this->create_service<std_srvs::srv::Empty>(
            "/reset_trajectory",
            [this](const std::shared_ptr<std_srvs::srv::Empty::Request>,
                   std::shared_ptr<std_srvs::srv::Empty::Response>) {
                trajectory_points_.clear();
                
                point_log_.close();  // Close if open
                point_log_.open("logs/clicked_points.csv", std::ios::trunc);  // Truncate = clear
                point_log_.close();
                point_log_.open("logs/clicked_points.csv", std::ios::app);  // Reopen for further appending
                RCLCPP_INFO(this->get_logger(), "Trajectory reset.");

                // Xóa đường
                visualization_msgs::msg::Marker delete_marker;
                delete_marker.header.frame_id = "zivid_optical_frame";
                delete_marker.header.stamp = this->now();
                delete_marker.ns = "trajectory";
                delete_marker.id = 0;
                delete_marker.action = visualization_msgs::msg::Marker::DELETEALL;
                marker_pub_->publish(delete_marker);

                visualization_msgs::msg::Marker del_point;
                del_point.header.frame_id = "zivid_optical_frame";
                del_point.header.stamp = this->now();
                del_point.ns = "labeled_points";
                del_point.action = visualization_msgs::msg::Marker::DELETEALL;
                marker_pub_->publish(del_point);

                // Xóa nhãn số thứ tự
                visualization_msgs::msg::Marker del_text;
                del_text.header.frame_id = "zivid_optical_frame";
                del_text.header.stamp = this->now();
                del_text.ns = "labels";
                del_text.action = visualization_msgs::msg::Marker::DELETEALL;;
                marker_pub_->publish(del_text);


                text_id_ = 1000;
            }
        );

        std::filesystem::create_directories("logs");  // ensure folder exists
        point_log_.open("logs/clicked_points.csv", std::ios::app);
        if (!point_log_.is_open()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open clicked_points.csv");
        } else {
            point_log_.close();
            point_log_.open("logs/clicked_points.csv", std::ios::trunc);
            point_log_.close();
            RCLCPP_INFO(this->get_logger(), "Logging clicked points to clicked_points.csv");
        }

        RCLCPP_INFO(this->get_logger(), "PointLabeler node started.");
    }

    ~PointLabeler() {
        if (point_log_.is_open()) {
            point_log_.close();
        }
    }

private:
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr cloud_sub_;
    rclcpp::Subscription<geometry_msgs::msg::PointStamped>::SharedPtr click_sub_;
    rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr label_pub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr reset_srv_;

    pcl::PointCloud<pcl::PointXYZ>::Ptr current_cloud_{new pcl::PointCloud<pcl::PointXYZ>()};

    std::vector<geometry_msgs::msg::Point> trajectory_points_;
    bool close_polygon_ = true;
    int text_id_ = 1000;
    int point_id_ = 1000;


    void cloud_callback(const sensor_msgs::msg::PointCloud2::SharedPtr msg) {
        pcl::fromROSMsg(*msg, *current_cloud_);
    }

    void click_callback(const geometry_msgs::msg::PointStamped::SharedPtr click) {
        if (current_cloud_->empty()) {
            RCLCPP_WARN(this->get_logger(), "Point cloud is empty!");
            return;
        }
        
        float min_dist = std::numeric_limits<float>::max();
        int closest_index = -1;

        for (size_t i = 0; i < current_cloud_->points.size(); ++i) {
            const auto& pt = current_cloud_->points[i];
            float dx = pt.x - click->point.x;
            float dy = pt.y - click->point.y;
            float dz = pt.z - click->point.z;
            float dist = dx * dx + dy * dy + dz * dz;

            if (dist < min_dist) {
                min_dist = dist;
                closest_index = static_cast<int>(i);
            }
        }

        if (closest_index < 0) return;

        const auto& pt = current_cloud_->points[closest_index];
        geometry_msgs::msg::Point current_point;
        current_point.x = pt.x;
        current_point.y = pt.y;
        current_point.z = pt.z;
        trajectory_points_.push_back(current_point);

        // Gán nhãn
        std_msgs::msg::Int32MultiArray label_msg;
        label_msg.data = {closest_index, 1};  // nhãn 1
        label_pub_->publish(label_msg);

        // Marker hình cầu
        visualization_msgs::msg::Marker marker;
        marker.header.frame_id = click->header.frame_id;
        marker.header.stamp = this->now();
        marker.ns = "labeled_points";
        marker.id = closest_index;
        marker.type = visualization_msgs::msg::Marker::SPHERE;
        marker.action = visualization_msgs::msg::Marker::ADD;
        marker.pose.position = current_point;
        marker.pose.orientation.w = 1.0;
        marker.scale.x = 0.01;
        marker.scale.y = 0.01;
        marker.scale.z = 0.01;
        marker.color.r = 1.0;
        marker.color.g = 0.0;
        marker.color.b = 0.0;
        marker.color.a = 1.0;
        marker.lifetime = rclcpp::Duration::from_seconds(0);
        marker_pub_->publish(marker);

        // Marker dạng TEXT hiển thị số thứ tự
        visualization_msgs::msg::Marker text_marker;
        text_marker.header.frame_id = click->header.frame_id;
        text_marker.header.stamp = this->now();
        text_marker.ns = "labels";
        text_marker.id = text_id_++;
        text_marker.type = visualization_msgs::msg::Marker::TEXT_VIEW_FACING;
        text_marker.action = visualization_msgs::msg::Marker::ADD;
        text_marker.pose.position = current_point;
        text_marker.pose.position.z += 0.05;
        text_marker.scale.z = 0.01;
        text_marker.color.r = 1.0;
        text_marker.color.g = 1.0;
        text_marker.color.b = 0.0;
        text_marker.color.a = 1.0;
        text_marker.text = std::to_string(trajectory_points_.size());
        text_marker.lifetime = rclcpp::Duration::from_seconds(0);
        marker_pub_->publish(text_marker);

        // Marker LINE_STRIP
        visualization_msgs::msg::Marker line_strip;
        line_strip.header.frame_id = click->header.frame_id;
        line_strip.header.stamp = this->now();
        line_strip.ns = "trajectory";
        line_strip.id = 0;
        line_strip.type = visualization_msgs::msg::Marker::LINE_STRIP;
        line_strip.action = visualization_msgs::msg::Marker::ADD;
        line_strip.points = trajectory_points_;
        // if (close_polygon_ && trajectory_points_.size() >= 3) {
        //     line_strip.points.push_back(trajectory_points_.front());  // nối về điểm đầu
        // }
        line_strip.scale.x = 0.01;
        line_strip.color.r = 0.0;
        line_strip.color.g = 0.0;
        line_strip.color.b = 1.0;
        line_strip.color.a = 1.0;
        line_strip.lifetime = rclcpp::Duration::from_seconds(0);
        marker_pub_->publish(line_strip);
    

        point_log_.open("logs/clicked_points.csv", std::ios::app);

        if (point_log_.is_open()) {
            point_log_ << current_point.x << "," 
                       << current_point.y << "," 
                       << current_point.z << "\n";
            point_log_.close();
        }
    }


};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PointLabeler>());
    rclcpp::shutdown();
    return 0;
}
