/********************************************************************************
** Form generated from reading UI file 'ur16.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UR16_H
#define UI_UR16_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloGui
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *rviz_display;
    QPushButton *view_rviz;
    QPushButton *click_point;
    QPushButton *delete_line_btn;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *start_btn;
    QPushButton *moverobot_btn;
    QPushButton *power_on_btn;
    QPushButton *power_off_btn;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_tool;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *tool_rpm_text;
    QLabel *label_7;
    QComboBox *comboBox_dir;
    QLabel *label_8;
    QLineEdit *feed_rate_text;
    QLabel *label_9;
    QLineEdit *tool_diameter_text;
    QLabel *label_10;
    QLineEdit *tool_length_text;
    QLabel *label_11;
    QComboBox *comboBox_tooltype;
    QLabel *label_12;
    QLineEdit *tool_pressure_text;
    QLabel *label_13;
    QComboBox *comboBox_toolgeometry;
    QLabel *label_14;
    QLineEdit *sanding_text;
    QPushButton *save_tool;
    QRadioButton *radio_tool;
    QComboBox *comboBox_tool;
    QGroupBox *groupBox_6;
    QComboBox *comboBox_setting;
    QRadioButton *radio_parameter;
    QGroupBox *groupBox_parameter;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *rb_rotation_text;
    QLineEdit *spindle_speed_text;
    QLineEdit *rb_linear_text;
    QLabel *label_5;
    QPushButton *save_param;
    QLabel *label_2;
    QGroupBox *groupBox_7;
    QLabel *label_15;
    QComboBox *cb_line_id;
    QComboBox *cb_line_param;
    QComboBox *cb_line_tool;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *save_trajectory;
    QTextBrowser *textBrowser;
    QPushButton *preparation_btn;
    QPushButton *ExecutePage_btn;
    QPushButton *test_service;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *HelloGui)
    {
        if (HelloGui->objectName().isEmpty())
            HelloGui->setObjectName(QString::fromUtf8("HelloGui"));
        HelloGui->resize(1850, 1000);
        QPalette palette;
        QBrush brush(QColor(244, 133, 23, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(145, 145, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        HelloGui->setPalette(palette);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        HelloGui->setFont(font);
        HelloGui->setContextMenuPolicy(Qt::NoContextMenu);
        centralwidget = new QWidget(HelloGui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(630, 10, 1211, 941));
        rviz_display = new QWidget(groupBox);
        rviz_display->setObjectName(QString::fromUtf8("rviz_display"));
        rviz_display->setGeometry(QRect(30, 40, 1161, 781));
        view_rviz = new QPushButton(groupBox);
        view_rviz->setObjectName(QString::fromUtf8("view_rviz"));
        view_rviz->setGeometry(QRect(10, 870, 80, 23));
        click_point = new QPushButton(groupBox);
        click_point->setObjectName(QString::fromUtf8("click_point"));
        click_point->setGeometry(QRect(110, 870, 141, 23));
        delete_line_btn = new QPushButton(groupBox);
        delete_line_btn->setObjectName(QString::fromUtf8("delete_line_btn"));
        delete_line_btn->setGeometry(QRect(990, 870, 89, 25));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 80, 201, 71));
        QPalette palette1;
        QBrush brush2(QColor(255, 170, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        groupBox_3->setPalette(palette1);
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        start_btn = new QPushButton(groupBox_3);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));

        horizontalLayout->addWidget(start_btn);

        moverobot_btn = new QPushButton(groupBox_3);
        moverobot_btn->setObjectName(QString::fromUtf8("moverobot_btn"));

        horizontalLayout->addWidget(moverobot_btn);

        power_on_btn = new QPushButton(centralwidget);
        power_on_btn->setObjectName(QString::fromUtf8("power_on_btn"));
        power_on_btn->setEnabled(true);
        power_on_btn->setGeometry(QRect(20, 20, 91, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        QBrush brush6(QColor(190, 190, 190, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        power_on_btn->setPalette(palette2);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferDefault);
        power_on_btn->setFont(font1);
        power_on_btn->setFlat(false);
        power_off_btn = new QPushButton(centralwidget);
        power_off_btn->setObjectName(QString::fromUtf8("power_off_btn"));
        power_off_btn->setEnabled(true);
        power_off_btn->setGeometry(QRect(130, 20, 91, 51));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        power_off_btn->setPalette(palette3);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        power_off_btn->setFont(font2);
        power_off_btn->setAutoDefault(false);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(310, 440, 301, 481));
        groupBox_tool = new QGroupBox(groupBox_5);
        groupBox_tool->setObjectName(QString::fromUtf8("groupBox_tool"));
        groupBox_tool->setGeometry(QRect(10, 110, 271, 348));
        formLayout = new QFormLayout(groupBox_tool);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(groupBox_tool);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        tool_rpm_text = new QLineEdit(groupBox_tool);
        tool_rpm_text->setObjectName(QString::fromUtf8("tool_rpm_text"));

        formLayout->setWidget(0, QFormLayout::FieldRole, tool_rpm_text);

        label_7 = new QLabel(groupBox_tool);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        comboBox_dir = new QComboBox(groupBox_tool);
        comboBox_dir->addItem(QString());
        comboBox_dir->addItem(QString());
        comboBox_dir->setObjectName(QString::fromUtf8("comboBox_dir"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_dir);

        label_8 = new QLabel(groupBox_tool);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        feed_rate_text = new QLineEdit(groupBox_tool);
        feed_rate_text->setObjectName(QString::fromUtf8("feed_rate_text"));

        formLayout->setWidget(2, QFormLayout::FieldRole, feed_rate_text);

        label_9 = new QLabel(groupBox_tool);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        tool_diameter_text = new QLineEdit(groupBox_tool);
        tool_diameter_text->setObjectName(QString::fromUtf8("tool_diameter_text"));

        formLayout->setWidget(3, QFormLayout::FieldRole, tool_diameter_text);

        label_10 = new QLabel(groupBox_tool);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        tool_length_text = new QLineEdit(groupBox_tool);
        tool_length_text->setObjectName(QString::fromUtf8("tool_length_text"));

        formLayout->setWidget(4, QFormLayout::FieldRole, tool_length_text);

        label_11 = new QLabel(groupBox_tool);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_11);

        comboBox_tooltype = new QComboBox(groupBox_tool);
        comboBox_tooltype->addItem(QString());
        comboBox_tooltype->addItem(QString());
        comboBox_tooltype->addItem(QString());
        comboBox_tooltype->addItem(QString());
        comboBox_tooltype->setObjectName(QString::fromUtf8("comboBox_tooltype"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox_tooltype);

        label_12 = new QLabel(groupBox_tool);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        tool_pressure_text = new QLineEdit(groupBox_tool);
        tool_pressure_text->setObjectName(QString::fromUtf8("tool_pressure_text"));

        formLayout->setWidget(6, QFormLayout::FieldRole, tool_pressure_text);

        label_13 = new QLabel(groupBox_tool);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_13);

        comboBox_toolgeometry = new QComboBox(groupBox_tool);
        comboBox_toolgeometry->addItem(QString());
        comboBox_toolgeometry->addItem(QString());
        comboBox_toolgeometry->addItem(QString());
        comboBox_toolgeometry->setObjectName(QString::fromUtf8("comboBox_toolgeometry"));

        formLayout->setWidget(7, QFormLayout::FieldRole, comboBox_toolgeometry);

        label_14 = new QLabel(groupBox_tool);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_14);

        sanding_text = new QLineEdit(groupBox_tool);
        sanding_text->setObjectName(QString::fromUtf8("sanding_text"));

        formLayout->setWidget(8, QFormLayout::FieldRole, sanding_text);

        save_tool = new QPushButton(groupBox_tool);
        save_tool->setObjectName(QString::fromUtf8("save_tool"));

        formLayout->setWidget(9, QFormLayout::FieldRole, save_tool);

        radio_tool = new QRadioButton(groupBox_5);
        radio_tool->setObjectName(QString::fromUtf8("radio_tool"));
        radio_tool->setGeometry(QRect(10, 70, 112, 23));
        comboBox_tool = new QComboBox(groupBox_5);
        comboBox_tool->addItem(QString());
        comboBox_tool->addItem(QString());
        comboBox_tool->addItem(QString());
        comboBox_tool->addItem(QString());
        comboBox_tool->addItem(QString());
        comboBox_tool->setObjectName(QString::fromUtf8("comboBox_tool"));
        comboBox_tool->setGeometry(QRect(10, 30, 171, 25));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 440, 291, 351));
        comboBox_setting = new QComboBox(groupBox_6);
        comboBox_setting->addItem(QString());
        comboBox_setting->addItem(QString());
        comboBox_setting->addItem(QString());
        comboBox_setting->addItem(QString());
        comboBox_setting->addItem(QString());
        comboBox_setting->setObjectName(QString::fromUtf8("comboBox_setting"));
        comboBox_setting->setGeometry(QRect(10, 30, 171, 25));
        radio_parameter = new QRadioButton(groupBox_6);
        radio_parameter->setObjectName(QString::fromUtf8("radio_parameter"));
        radio_parameter->setGeometry(QRect(10, 70, 161, 23));
        groupBox_parameter = new QGroupBox(groupBox_6);
        groupBox_parameter->setObjectName(QString::fromUtf8("groupBox_parameter"));
        groupBox_parameter->setGeometry(QRect(10, 110, 271, 224));
        gridLayout = new QGridLayout(groupBox_parameter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_parameter);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        rb_rotation_text = new QLineEdit(groupBox_parameter);
        rb_rotation_text->setObjectName(QString::fromUtf8("rb_rotation_text"));

        gridLayout->addWidget(rb_rotation_text, 1, 1, 1, 1);

        spindle_speed_text = new QLineEdit(groupBox_parameter);
        spindle_speed_text->setObjectName(QString::fromUtf8("spindle_speed_text"));

        gridLayout->addWidget(spindle_speed_text, 2, 1, 1, 1);

        rb_linear_text = new QLineEdit(groupBox_parameter);
        rb_linear_text->setObjectName(QString::fromUtf8("rb_linear_text"));

        gridLayout->addWidget(rb_linear_text, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_parameter);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        save_param = new QPushButton(groupBox_parameter);
        save_param->setObjectName(QString::fromUtf8("save_param"));

        gridLayout->addWidget(save_param, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox_parameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 170, 601, 261));
        label_15 = new QLabel(groupBox_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 30, 61, 17));
        cb_line_id = new QComboBox(groupBox_7);
        cb_line_id->addItem(QString());
        cb_line_id->addItem(QString());
        cb_line_id->addItem(QString());
        cb_line_id->setObjectName(QString::fromUtf8("cb_line_id"));
        cb_line_id->setGeometry(QRect(120, 30, 71, 21));
        cb_line_param = new QComboBox(groupBox_7);
        cb_line_param->addItem(QString());
        cb_line_param->addItem(QString());
        cb_line_param->addItem(QString());
        cb_line_param->addItem(QString());
        cb_line_param->addItem(QString());
        cb_line_param->setObjectName(QString::fromUtf8("cb_line_param"));
        cb_line_param->setGeometry(QRect(120, 60, 171, 25));
        cb_line_tool = new QComboBox(groupBox_7);
        cb_line_tool->addItem(QString());
        cb_line_tool->addItem(QString());
        cb_line_tool->addItem(QString());
        cb_line_tool->addItem(QString());
        cb_line_tool->addItem(QString());
        cb_line_tool->setObjectName(QString::fromUtf8("cb_line_tool"));
        cb_line_tool->setGeometry(QRect(120, 90, 171, 25));
        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 60, 91, 20));
        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 90, 67, 17));
        save_trajectory = new QPushButton(groupBox_7);
        save_trajectory->setObjectName(QString::fromUtf8("save_trajectory"));
        save_trajectory->setGeometry(QRect(10, 230, 90, 25));
        textBrowser = new QTextBrowser(groupBox_7);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(300, 30, 291, 221));
        preparation_btn = new QPushButton(centralwidget);
        preparation_btn->setObjectName(QString::fromUtf8("preparation_btn"));
        preparation_btn->setGeometry(QRect(300, 20, 161, 61));
        ExecutePage_btn = new QPushButton(centralwidget);
        ExecutePage_btn->setObjectName(QString::fromUtf8("ExecutePage_btn"));
        ExecutePage_btn->setGeometry(QRect(300, 100, 161, 61));
        test_service = new QPushButton(centralwidget);
        test_service->setObjectName(QString::fromUtf8("test_service"));
        test_service->setGeometry(QRect(10, 820, 121, 51));
        HelloGui->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HelloGui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HelloGui->setStatusBar(statusbar);
        menuBar = new QMenuBar(HelloGui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1850, 22));
        HelloGui->setMenuBar(menuBar);

        retranslateUi(HelloGui);

        power_on_btn->setDefault(false);
        power_off_btn->setDefault(false);


        QMetaObject::connectSlotsByName(HelloGui);
    } // setupUi

    void retranslateUi(QMainWindow *HelloGui)
    {
        HelloGui->setWindowTitle(QCoreApplication::translate("HelloGui", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HelloGui", "RViz", nullptr));
        view_rviz->setText(QCoreApplication::translate("HelloGui", "View", nullptr));
        click_point->setText(QCoreApplication::translate("HelloGui", "Click Point", nullptr));
        delete_line_btn->setText(QCoreApplication::translate("HelloGui", "Delete Line", nullptr));
        groupBox_3->setTitle(QString());
        start_btn->setText(QCoreApplication::translate("HelloGui", "Capture", nullptr));
        moverobot_btn->setText(QCoreApplication::translate("HelloGui", "Move robot", nullptr));
        power_on_btn->setText(QCoreApplication::translate("HelloGui", "POWER ON", nullptr));
        power_off_btn->setText(QCoreApplication::translate("HelloGui", "POWER OFF", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("HelloGui", "Tools", nullptr));
        groupBox_tool->setTitle(QCoreApplication::translate("HelloGui", "Setting Tool", nullptr));
        label_6->setText(QCoreApplication::translate("HelloGui", "Tool RPM ", nullptr));
        label_7->setText(QCoreApplication::translate("HelloGui", "Direction of rotation", nullptr));
        comboBox_dir->setItemText(0, QCoreApplication::translate("HelloGui", "clockwise", nullptr));
        comboBox_dir->setItemText(1, QCoreApplication::translate("HelloGui", "counterclockwise", nullptr));

        label_8->setText(QCoreApplication::translate("HelloGui", "Feed Rate (mm/min)", nullptr));
        label_9->setText(QCoreApplication::translate("HelloGui", "Tool diameter (mm)", nullptr));
        label_10->setText(QCoreApplication::translate("HelloGui", "Tool length", nullptr));
        label_11->setText(QCoreApplication::translate("HelloGui", "Tool type", nullptr));
        comboBox_tooltype->setItemText(0, QCoreApplication::translate("HelloGui", "Mill", nullptr));
        comboBox_tooltype->setItemText(1, QCoreApplication::translate("HelloGui", "Drill", nullptr));
        comboBox_tooltype->setItemText(2, QCoreApplication::translate("HelloGui", "Grind", nullptr));
        comboBox_tooltype->setItemText(3, QCoreApplication::translate("HelloGui", "Sand", nullptr));

        label_12->setText(QCoreApplication::translate("HelloGui", "Tool pressure (N)", nullptr));
        label_13->setText(QCoreApplication::translate("HelloGui", "Tool geometry", nullptr));
        comboBox_toolgeometry->setItemText(0, QCoreApplication::translate("HelloGui", "Round", nullptr));
        comboBox_toolgeometry->setItemText(1, QCoreApplication::translate("HelloGui", "Square", nullptr));
        comboBox_toolgeometry->setItemText(2, QCoreApplication::translate("HelloGui", "Triangular", nullptr));

        label_14->setText(QCoreApplication::translate("HelloGui", "Sanding", nullptr));
        sanding_text->setText(QString());
        save_tool->setText(QCoreApplication::translate("HelloGui", "Save", nullptr));
        radio_tool->setText(QCoreApplication::translate("HelloGui", "Setting tool", nullptr));
        comboBox_tool->setItemText(0, QCoreApplication::translate("HelloGui", "Tool 1", nullptr));
        comboBox_tool->setItemText(1, QCoreApplication::translate("HelloGui", "Tool 2", nullptr));
        comboBox_tool->setItemText(2, QCoreApplication::translate("HelloGui", "Tool 3", nullptr));
        comboBox_tool->setItemText(3, QCoreApplication::translate("HelloGui", "Tool 4", nullptr));
        comboBox_tool->setItemText(4, QCoreApplication::translate("HelloGui", "Default", nullptr));

        groupBox_6->setTitle(QCoreApplication::translate("HelloGui", "Parameters", nullptr));
        comboBox_setting->setItemText(0, QCoreApplication::translate("HelloGui", "Setting 1", nullptr));
        comboBox_setting->setItemText(1, QCoreApplication::translate("HelloGui", "Setting 2", nullptr));
        comboBox_setting->setItemText(2, QCoreApplication::translate("HelloGui", "Setting 3", nullptr));
        comboBox_setting->setItemText(3, QCoreApplication::translate("HelloGui", "Setting 4", nullptr));
        comboBox_setting->setItemText(4, QCoreApplication::translate("HelloGui", "Default", nullptr));

        radio_parameter->setText(QCoreApplication::translate("HelloGui", "Setting parameters", nullptr));
        groupBox_parameter->setTitle(QCoreApplication::translate("HelloGui", "Setting Parameter", nullptr));
        label->setText(QCoreApplication::translate("HelloGui", "Robot Linear Speed (mph)", nullptr));
        label_5->setText(QCoreApplication::translate("HelloGui", "Spindle Speed (RPM)", nullptr));
        save_param->setText(QCoreApplication::translate("HelloGui", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("HelloGui", "Robot Rotation Speed (rad/s)", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("HelloGui", "Trajectory setting", nullptr));
        label_15->setText(QCoreApplication::translate("HelloGui", "Line ID:", nullptr));
        cb_line_id->setItemText(0, QCoreApplication::translate("HelloGui", "1", nullptr));
        cb_line_id->setItemText(1, QCoreApplication::translate("HelloGui", "2", nullptr));
        cb_line_id->setItemText(2, QCoreApplication::translate("HelloGui", "3", nullptr));

        cb_line_param->setItemText(0, QCoreApplication::translate("HelloGui", "Setting 1", nullptr));
        cb_line_param->setItemText(1, QCoreApplication::translate("HelloGui", "Setting 2", nullptr));
        cb_line_param->setItemText(2, QCoreApplication::translate("HelloGui", "Setting 3", nullptr));
        cb_line_param->setItemText(3, QCoreApplication::translate("HelloGui", "Setting 4", nullptr));
        cb_line_param->setItemText(4, QCoreApplication::translate("HelloGui", "Default", nullptr));

        cb_line_tool->setItemText(0, QCoreApplication::translate("HelloGui", "Tool 1", nullptr));
        cb_line_tool->setItemText(1, QCoreApplication::translate("HelloGui", "Tool 2", nullptr));
        cb_line_tool->setItemText(2, QCoreApplication::translate("HelloGui", "Tool 3", nullptr));
        cb_line_tool->setItemText(3, QCoreApplication::translate("HelloGui", "Tool 4", nullptr));
        cb_line_tool->setItemText(4, QCoreApplication::translate("HelloGui", "Default", nullptr));

        label_16->setText(QCoreApplication::translate("HelloGui", "Parameters:", nullptr));
        label_17->setText(QCoreApplication::translate("HelloGui", "Tool:", nullptr));
        save_trajectory->setText(QCoreApplication::translate("HelloGui", "Save", nullptr));
        preparation_btn->setText(QCoreApplication::translate("HelloGui", "Preparation page", nullptr));
        ExecutePage_btn->setText(QCoreApplication::translate("HelloGui", "Execute Page", nullptr));
        test_service->setText(QCoreApplication::translate("HelloGui", "Test Service", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloGui: public Ui_HelloGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UR16_H
