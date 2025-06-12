#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>

#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>

class PCDPublisher : public rclcpp::Node
{
public:
    PCDPublisher()
        : Node("pcd_publisher")
    {
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("point_cloud", 10);

        // Load the PCD file
        pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGBA>);
        std::string pcd_file = "Zivid3D.pcd";  // 🔁 Update this!

        if (pcl::io::loadPCDFile<pcl::PointXYZRGBA>(pcd_file, *cloud) == -1)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to load PCD file: %s", pcd_file.c_str());
            return;
        }

        for(auto& point : *cloud)
        {
            point.x *= 0.001f;
            point.y *= 0.001f;
            point.z *= 0.001f;

        }

        RCLCPP_INFO(this->get_logger(), "Loaded %zu points", cloud->size());
        // Convert to ROS2 PointCloud2 message
        pcl::toROSMsg(*cloud, msg_);
        msg_.header.frame_id = "3d_frame";  // Make sure this matches RViz Fixed Frame

        // Start a timer to repeatedly publish the cloud
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            [this]() {
                msg_.header.stamp = this->get_clock()->now();  // Update timestamp
                publisher_->publish(msg_);
            });

        RCLCPP_INFO(this->get_logger(), "Started publishing point cloud to topic /point_cloud");
    }

private:
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
    sensor_msgs::msg::PointCloud2 msg_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PCDPublisher>());
    rclcpp::shutdown();
    return 0;
}
