/********************************************************************************
** Form generated from reading UI file 'ExecutePage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTEPAGE_H
#define UI_EXECUTEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormHau
{
public:
    QPushButton *back_home_btn;
    QGroupBox *groupBox;
    QWidget *rviz_display;
    QWidget *qwtPlot_3;
    QWidget *qwtPlot_2;
    QWidget *qwtPlot_1;
    QPushButton *start_process_btn;
    QPushButton *stop_process_btn;

    void setupUi(QWidget *FormHau)
    {
        if (FormHau->objectName().isEmpty())
            FormHau->setObjectName(QString::fromUtf8("FormHau"));
        FormHau->resize(1855, 1000);
        back_home_btn = new QPushButton(FormHau);
        back_home_btn->setObjectName(QString::fromUtf8("back_home_btn"));
        back_home_btn->setGeometry(QRect(10, 10, 161, 71));
        groupBox = new QGroupBox(FormHau);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(830, 50, 481, 701));
        rviz_display = new QWidget(groupBox);
        rviz_display->setObjectName(QString::fromUtf8("rviz_display"));
        rviz_display->setGeometry(QRect(10, 30, 831, 711));
        qwtPlot_3 = new QWidget(FormHau);
        qwtPlot_3->setObjectName(QString::fromUtf8("qwtPlot_3"));
        qwtPlot_3->setGeometry(QRect(20, 680, 771, 311));
        qwtPlot_2 = new QWidget(FormHau);
        qwtPlot_2->setObjectName(QString::fromUtf8("qwtPlot_2"));
        qwtPlot_2->setGeometry(QRect(20, 380, 771, 281));
        qwtPlot_1 = new QWidget(FormHau);
        qwtPlot_1->setObjectName(QString::fromUtf8("qwtPlot_1"));
        qwtPlot_1->setGeometry(QRect(20, 90, 771, 271));
        start_process_btn = new QPushButton(FormHau);
        start_process_btn->setObjectName(QString::fromUtf8("start_process_btn"));
        start_process_btn->setGeometry(QRect(190, 10, 161, 71));
        stop_process_btn = new QPushButton(FormHau);
        stop_process_btn->setObjectName(QString::fromUtf8("stop_process_btn"));
        stop_process_btn->setGeometry(QRect(370, 10, 161, 71));

        retranslateUi(FormHau);

        QMetaObject::connectSlotsByName(FormHau);
    } // setupUi

    void retranslateUi(QWidget *FormHau)
    {
        FormHau->setWindowTitle(QCoreApplication::translate("FormHau", "Form", nullptr));
        back_home_btn->setText(QCoreApplication::translate("FormHau", "Back Home", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FormHau", "Rviz", nullptr));
        start_process_btn->setText(QCoreApplication::translate("FormHau", "Start Process", nullptr));
        stop_process_btn->setText(QCoreApplication::translate("FormHau", "Stop Process", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormHau: public Ui_FormHau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTEPAGE_H
