#include "gui/ExecutePage.h"
#include "ui_ExecutePage.h"
#include <rviz_common/display_context.hpp>
#include "stdio.h"


#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_symbol.h>
#include <qwt_plot_directpainter.h>
#include <qwt_scale_engine.h>
// #include "incrementalplot.h"
#include <qwt_plot_zoomer.h>

#include <qpaintengine.h>



#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

TimeSeriesPlot::TimeSeriesPlot(QWidget *parent)
    : QMainWindow(parent)
{
    this->reset();
    this->curve = new QwtPlotCurve;
    this->plot = new QwtPlot;
    this->curve->setSamples(xData, yData, plotDataSize);
    this->curve->attach(plot);
    this->plot->setAxisScale(QwtPlot::yLeft, -50, 50);
    this->plot->replot();
    this->plot->show();

    auto *zoomer = new QwtPlotZoomer(plot->canvas());
    zoomer->setRubberBand(QwtPicker::RectRubberBand);
    zoomer->setRubberBandPen(QColor(Qt::green));
    zoomer->setTrackerMode(QwtPicker::AlwaysOn);
    zoomer->setMousePattern(QwtEventPattern::MouseSelect2, Qt::RightButton, Qt::ControlModifier); // Right click + Ctrl to zoom out
    plot->setAutoReplot(true);
    // plot->canvas()->setPalette(QColor(130,130,130,50));
     plot->axisScaleEngine(QwtPlot::xBottom)->setAttribute(QwtScaleEngine::Floating,true);
   //  plot->setBrush(QColor(130,130,130,50));
     plot->setAxisAutoScale(QwtPlot::xBottom);
    // Enable autoscale for Y axis
    plot->setAxisAutoScale(QwtPlot::yLeft);

    plot->setAxisTitle(QwtPlot::xBottom, "Time (s)");
    plot->setAxisTitle(QwtPlot::yLeft, "Value");
    connect(zoomer, &QwtPlotZoomer::zoomed, this, [zoomer](const QRectF &rect){
        qDebug() << "Zoomed to rectangle:" << rect;
        if (zoomer->zoomRectIndex() == 0)
        {
            zoomer->plot()->setAxisAutoScale(QwtPlot::xBottom, true);
            zoomer->plot()->setAxisAutoScale(QwtPlot::yLeft, true);
        }
    });
    this->setLayout(new QVBoxLayout);
    this->plot->resize(690, 250);
    this->layout()->addWidget(plot);
}

TimeSeriesPlot::~TimeSeriesPlot()
{
    // Clean up resources if necessary
    // delete curve;
}

void TimeSeriesPlot::reset()
{
    // Reset the plot data
    for (int index = 0; index < plotDataSize; ++index) {
        xData[index] = index;
        yData[index] = 0;
    }
}

void TimeSeriesPlot::append_graph(double inVal)
{
    mtx.lock();
    std::move(yData, yData + plotDataSize - 1, yData + 1);
    yData[0] = inVal;
    mtx.unlock();
}

void TimeSeriesPlot::refreshPlot()
{
    mtx.lock();
    curve->setSamples(xData, yData, plotDataSize);
    mtx.unlock();
    plot->replot();
}

void TimeSeriesPlot::set_xTitle(const QString &title)
{
    plot->setAxisTitle(QwtPlot::xBottom, title);
}
void TimeSeriesPlot::set_yTitle(const QString &title)
{
    plot->setAxisTitle(QwtPlot::yLeft, title);
}
void TimeSeriesPlot::set_Title(const QString &title)
{
    plot->setTitle(title);
}



ExecuteForm::ExecuteForm(
    QApplication *app,
    rviz_common::ros_integration::RosNodeAbstractionIface::WeakPtr rviz_ros_node,
    QWidget* shared_rviz_widget,
    QWidget *parent)
    : app_(app), node_weak_ptr_(rviz_ros_node), rviz_widget(shared_rviz_widget), QMainWindow(parent)
    , ui(new Ui::ExecuteForm)
{
    ui->setupUi(this);
    connect(ui->back_home_btn, &QPushButton::clicked, this, [this]() {
        emit backToMainWindow();
    });

    node = node_weak_ptr_.lock()->get_raw_node();
    force_subscription_ = node->create_subscription<std_msgs::msg::Int64>(
    "/fake_Force", 100,
    std::bind(&ExecuteForm::topic_callback_Force, this, std::placeholders::_1));

    torque_subscription_ = node->create_subscription<std_msgs::msg::Int64>(
    "/fake_Torque", 100,
    std::bind(&ExecuteForm::topic_callback_Torque, this, std::placeholders::_1));

    spindle_subscription_ = node->create_subscription<std_msgs::msg::Int64>(
    "/fake_Spindle", 100,
    std::bind(&ExecuteForm::topic_callback_Spindle, this, std::placeholders::_1));
    
    this->time_series_plot_Force = new TimeSeriesPlot(this);
    this->time_series_plot_Force->set_xTitle("Time");
    this->time_series_plot_Force->set_yTitle("Force (N)");
    this->time_series_plot_Force->set_Title("Force Time Series Plot");
    ui->qwtPlot_1->setLayout(new QVBoxLayout);
    ui->qwtPlot_1->layout()->addWidget(time_series_plot_Force);
    // ui->qwtPlot_1 = this->time_series_plot_Force;
    // Initialize UI components or any other setup

    this->time_series_plot_Torque = new TimeSeriesPlot(this);
    this->time_series_plot_Torque->set_xTitle("Time");
    this->time_series_plot_Torque->set_yTitle("Torque (Nm)");
    this->time_series_plot_Torque->set_Title("Torque Time Series Plot");
    ui->qwtPlot_2->setLayout(new QVBoxLayout);
    ui->qwtPlot_2->layout()->addWidget(time_series_plot_Torque);

    this->time_series_plot_Spindle = new TimeSeriesPlot(this);
    this->time_series_plot_Spindle->set_xTitle("Time");
    this->time_series_plot_Spindle->set_yTitle("Spindle (RPM)");
    this->time_series_plot_Spindle->set_Title("Spindle Time Series Plot");
    ui->qwtPlot_3->setLayout(new QVBoxLayout);
    ui->qwtPlot_3->layout()->addWidget(time_series_plot_Spindle);
    
    ros_timer = new QTimer(this);
    connect(ros_timer, SIGNAL(timeout()), this, SLOT(spin_once()));
    ros_timer->start(100);
    
    connect(ui->start_process_btn, &QPushButton::clicked, this, &ExecuteForm::start_process);
    connect(ui->stop_process_btn, &QPushButton::clicked, this, &ExecuteForm::stop_process);
}

void ExecuteForm::callback(const rclcpp::Client<gui_msgs::srv::AutoProcess>::SharedFuture result)
{
    // Handle the service response here
    RCLCPP_INFO(node->get_logger(), "Service response received: %d", 1);
    // You can update the UI or perform other actions based on the response
}

void ExecuteForm::start_process()
{
    // Start the process, e.g., by calling a service or publishing a message
    RCLCPP_INFO(node->get_logger(), "Starting process...");
    // Example: Call a service or publish a message to start the process
    auto auto_process_client_callback = [&,this](rclcpp::Client<gui_msgs::srv::AutoProcess>::SharedFuture result_)
    { 
        RCLCPP_INFO(this->node->get_logger(), "[inner service] callback executed");
        auto result = result_.get();
        printf("Received result: %d\n", result->res);
        // choice = stoi(result->res);
    };



    rclcpp::Client<gui_msgs::srv::AutoProcess>::SharedPtr client = node->create_client<gui_msgs::srv::AutoProcess>("auto_process");
    
    
    auto request = std::make_shared<gui_msgs::srv::AutoProcess::Request>();
    request->req = 1;
    auto result = client->async_send_request(request, std::bind(&ExecuteForm::callback, this, std::placeholders::_1));
}

void ExecuteForm::stop_process()
{
    // Stop the process, e.g., by calling a service or publishing a message
    RCLCPP_INFO(node->get_logger(), "Stopping process...");
    // Example: Call a service or publish a message to stop the process
    rclcpp::Client<gui_msgs::srv::AutoProcess>::SharedPtr client = node->create_client<gui_msgs::srv::AutoProcess>("auto_process");
    auto request = std::make_shared<gui_msgs::srv::AutoProcess::Request>();
    request->req = 0;
    auto result = client->async_send_request(request, std::bind(&ExecuteForm::callback, this, std::placeholders::_1));
}

void ExecuteForm::spin_once()
{
    if (rclcpp::ok()) {

        this->time_series_plot_Force->refreshPlot();
        this->time_series_plot_Torque->refreshPlot();
        this->time_series_plot_Spindle->refreshPlot();
        // update();
    } else {
        // app_->quit();
    }

    if (rclcpp::ok()) {
        app_->processEvents();
    } else {
        app_->quit();
    }
}

void ExecuteForm::topic_callback_Force(const std_msgs::msg::Int64::SharedPtr msg)
{
    // RCLCPP_INFO(node->get_logger(), "Received joint state: %f", msg->position[0]);
    this->time_series_plot_Force->append_graph(msg->data);
}

void ExecuteForm::topic_callback_Torque(const std_msgs::msg::Int64::SharedPtr msg)
{
    this->time_series_plot_Torque->append_graph(msg->data);
}

void ExecuteForm::topic_callback_Spindle(const std_msgs::msg::Int64::SharedPtr msg)
{
    this->time_series_plot_Spindle->append_graph(msg->data);
}


ExecuteForm::~ExecuteForm()
{
    delete ui;
}

void ExecuteForm::openRviz(QWidget* shared_rviz_widget)
{
    rviz_widget = shared_rviz_widget;
    ui->rviz_display->setLayout(new QVBoxLayout);
    ui->rviz_display->layout()->addWidget(rviz_widget);
    rviz_widget->show();
}

void ExecuteForm::closeRviz()
{
    ui->rviz_display->layout()->removeWidget(rviz_widget);
    rviz_widget->setParent(nullptr);  // Detach widget from UI, but do not delete
    // Do NOT delete rviz_widget, it's owned elsewhere
    rviz_widget = nullptr;
}