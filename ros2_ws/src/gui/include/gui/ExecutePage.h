#ifndef EXECUTEPAGE_H
#define EXECUTEPAGE_H

#include <QMainWindow>
#include <rviz_common/render_panel.hpp>
#include <rviz_common/visualization_manager.hpp>
#include <rviz_common/ros_integration/ros_node_abstraction.hpp>
#include "gui/rvizpanel.h"
#include "sensor_msgs/msg/joint_state.hpp"
#include <std_msgs/msg/int64.hpp>
#include "gui/parser.h"
#include <filesystem>

// #pragma region plot_graph_line
//plot graph line
#include <qwt_plot.h>
#include <qwt_thermo.h>
#include <qwt_plot_curve.h>
#include <qwt_symbol.h>
#include <qwt_plot_directpainter.h>
#include <qwt_scale_engine.h>
// #include "incrementalplot.h"
#include <qwt_plot_zoomer.h>

#include <qpaintengine.h>

class QwtPlotCurve;
class QwtPlotDirectPainter;
//plot graph line
#include <qtimer.h>

#include "gui_msgs/msg/auto_process.hpp"
#include "gui_msgs/srv/auto_process.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class ExecuteForm;
}
QT_END_NAMESPACE

class TimeSeriesPlot: public QMainWindow
{
    Q_OBJECT
public:
    explicit TimeSeriesPlot(QWidget *parent = nullptr);
    ~TimeSeriesPlot();
    void append_graph(double v);
    void reset();
    void refreshPlot();

    void set_xTitle(const QString &title);
    void set_yTitle(const QString &title);
    void set_Title(const QString &title);
    // void setThermoValue(double value);
    // void setPlotDataSize(int size);
private:
    static constexpr int plotDataSize = 500;
    QwtPlot      *plot;
    QwtPlotCurve *curve;
    // data arrays for the plot
    double xData[plotDataSize];
    double yData[plotDataSize];
    long count = 0;

    std::mutex mtx; 
};

//=======================================================================

class ExecuteForm : public QMainWindow
{
    Q_OBJECT
public:
    explicit ExecuteForm(QApplication *app,
                     rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node,
                     QWidget* shared_rviz_widget,
                     QWidget *parent = nullptr);
    ~ExecuteForm();
    void closeRviz();
    void openRviz(QWidget* shared_rviz_widget);
public slots:
    void spin_once();
    void start_process();
    void stop_process();
    void callback(const rclcpp::Client<gui_msgs::srv::AutoProcess>::SharedFuture result);
signals:
    void backToMainWindow();

private:
    QApplication * app_;
    Ui::ExecuteForm *ui;
    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr node_weak_ptr_;
    rclcpp::Node::SharedPtr node;
    QWidget* rviz_widget = nullptr;

    
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr force_subscription_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr torque_subscription_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr spindle_subscription_;

    void topic_callback_Force(const std_msgs::msg::Int64::SharedPtr msg);
    void topic_callback_Torque(const std_msgs::msg::Int64::SharedPtr msg);
    void topic_callback_Spindle(const std_msgs::msg::Int64::SharedPtr msg);
    
    unsigned long fake_x_axis = 0;
    
    QTimer *ros_timer;

    TimeSeriesPlot *time_series_plot_Force = nullptr;
    TimeSeriesPlot *time_series_plot_Torque = nullptr;
    TimeSeriesPlot *time_series_plot_Spindle = nullptr;

};


#endif // EXECUTEPAGE_H