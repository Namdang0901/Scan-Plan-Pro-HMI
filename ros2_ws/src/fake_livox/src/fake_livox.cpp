#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

class PCDPublisher : public rclcpp::Node {
public:
    PCDPublisher() : Node("fake_livox") {
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("points2", 10);

        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
        if (pcl::io::loadPCDFile<pcl::PointXYZ>("/home/hoabip/Zivid3D.pcd", *cloud) == -1) {
            RCLCPP_ERROR(this->get_logger(), "Couldn't read file");
            return;
        }


        pcl::toROSMsg(*cloud, output_);
        output_.header.frame_id = "3d_frame";

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(500),
            std::bind(&PCDPublisher::publishCloud, this));
    }

private:
    void publishCloud() {
        output_.header.stamp = this->get_clock()->now();
        publisher_->publish(output_);
    }

    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    sensor_msgs::msg::PointCloud2 output_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PCDPublisher>());
    rclcpp::shutdown();
    return 0;
}
