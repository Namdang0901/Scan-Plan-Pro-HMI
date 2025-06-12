/********************************************************************************
** Form generated from reading UI file 'input.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_H
#define UI_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *back_btn;
    QGroupBox *groupBox;
    QWidget *rviz_display;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *move_to_joint_btn;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *joint1_text;
    QLabel *label_8;
    QLineEdit *joint2_text;
    QLabel *label_9;
    QLineEdit *joint3_text;
    QLabel *label_10;
    QLineEdit *joint4_text;
    QLabel *label_11;
    QLineEdit *joint5_text;
    QLabel *label_12;
    QLineEdit *joint6_text;
    QPushButton *save_joint_btn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1855, 1000);
        back_btn = new QPushButton(Form);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));
        back_btn->setGeometry(QRect(40, 10, 141, 71));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(630, 10, 1211, 941));
        rviz_display = new QWidget(groupBox);
        rviz_display->setObjectName(QString::fromUtf8("rviz_display"));
        rviz_display->setGeometry(QRect(30, 40, 1161, 781));
        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 480, 221, 311));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        move_to_joint_btn = new QPushButton(groupBox_2);
        move_to_joint_btn->setObjectName(QString::fromUtf8("move_to_joint_btn"));

        formLayout->setWidget(6, QFormLayout::FieldRole, move_to_joint_btn);

        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, horizontalSlider_2);

        horizontalSlider_3 = new QSlider(groupBox_2);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, horizontalSlider_3);

        horizontalSlider_4 = new QSlider(groupBox_2);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::FieldRole, horizontalSlider_4);

        horizontalSlider_5 = new QSlider(groupBox_2);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        formLayout->setWidget(4, QFormLayout::FieldRole, horizontalSlider_5);

        horizontalSlider_6 = new QSlider(groupBox_2);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        formLayout->setWidget(5, QFormLayout::FieldRole, horizontalSlider_6);

        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, horizontalSlider);

        groupBox_3 = new QGroupBox(Form);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(120, 120, 221, 311));
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        joint1_text = new QLineEdit(groupBox_3);
        joint1_text->setObjectName(QString::fromUtf8("joint1_text"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, joint1_text);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        joint2_text = new QLineEdit(groupBox_3);
        joint2_text->setObjectName(QString::fromUtf8("joint2_text"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, joint2_text);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        joint3_text = new QLineEdit(groupBox_3);
        joint3_text->setObjectName(QString::fromUtf8("joint3_text"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, joint3_text);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        joint4_text = new QLineEdit(groupBox_3);
        joint4_text->setObjectName(QString::fromUtf8("joint4_text"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, joint4_text);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        joint5_text = new QLineEdit(groupBox_3);
        joint5_text->setObjectName(QString::fromUtf8("joint5_text"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, joint5_text);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_12);

        joint6_text = new QLineEdit(groupBox_3);
        joint6_text->setObjectName(QString::fromUtf8("joint6_text"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, joint6_text);

        save_joint_btn = new QPushButton(groupBox_3);
        save_joint_btn->setObjectName(QString::fromUtf8("save_joint_btn"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, save_joint_btn);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        back_btn->setText(QCoreApplication::translate("Form", "Back Home", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Form", "RViz", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Form", "Current Joint", nullptr));
        label->setText(QCoreApplication::translate("Form", "Joint 1", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Joint2", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Joint3", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Joint 4", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Joint 5", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Joint 6", nullptr));
        move_to_joint_btn->setText(QCoreApplication::translate("Form", "Move to joint", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Form", "Set Joint", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "Joint 1", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "Joint2", nullptr));
        label_9->setText(QCoreApplication::translate("Form", "Joint3", nullptr));
        label_10->setText(QCoreApplication::translate("Form", "Joint 4", nullptr));
        label_11->setText(QCoreApplication::translate("Form", "Joint 5", nullptr));
        label_12->setText(QCoreApplication::translate("Form", "Joint 6", nullptr));
        save_joint_btn->setText(QCoreApplication::translate("Form", "Save joint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_H
