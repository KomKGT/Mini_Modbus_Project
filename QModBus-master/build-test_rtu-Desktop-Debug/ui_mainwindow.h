/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDial *Temp_Change;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rd_reg_label;
    QLineEdit *rd_reg_line_edit;
    QLabel *rd_count_label;
    QLineEdit *rd_count_line_edit;
    QPushButton *rd_button;
    QHBoxLayout *horizontalLayout_4;
    QLabel *wr_reg_label;
    QLineEdit *wr_reg_line_edit;
    QLabel *wr_val_label;
    QLineEdit *wr_val_line_edit;
    QPushButton *wr_button;
    QPlainTextEdit *log_plain_text_edit;
    QPushButton *connect_button;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LightBTN4;
    QPushButton *LightBTN5;
    QPushButton *LightBTN6;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *LightBTN;
    QPushButton *LightBTN2;
    QPushButton *LightBTN3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(873, 582);
        MainWindow->setMaximumSize(QSize(1000, 1000));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 420, 58, 14));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 420, 58, 14));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 420, 58, 14));
        Temp_Change = new QDial(centralWidget);
        Temp_Change->setObjectName(QStringLiteral("Temp_Change"));
        Temp_Change->setGeometry(QRect(590, 360, 151, 151));
        Temp_Change->setMinimum(20);
        Temp_Change->setMaximum(30);
        Temp_Change->setNotchesVisible(true);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(4, 29, 432, 264));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rd_reg_label = new QLabel(widget);
        rd_reg_label->setObjectName(QStringLiteral("rd_reg_label"));

        horizontalLayout_3->addWidget(rd_reg_label);

        rd_reg_line_edit = new QLineEdit(widget);
        rd_reg_line_edit->setObjectName(QStringLiteral("rd_reg_line_edit"));
        rd_reg_line_edit->setEnabled(true);

        horizontalLayout_3->addWidget(rd_reg_line_edit);

        rd_count_label = new QLabel(widget);
        rd_count_label->setObjectName(QStringLiteral("rd_count_label"));

        horizontalLayout_3->addWidget(rd_count_label);

        rd_count_line_edit = new QLineEdit(widget);
        rd_count_line_edit->setObjectName(QStringLiteral("rd_count_line_edit"));

        horizontalLayout_3->addWidget(rd_count_line_edit);

        rd_button = new QPushButton(widget);
        rd_button->setObjectName(QStringLiteral("rd_button"));

        horizontalLayout_3->addWidget(rd_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        wr_reg_label = new QLabel(widget);
        wr_reg_label->setObjectName(QStringLiteral("wr_reg_label"));

        horizontalLayout_4->addWidget(wr_reg_label);

        wr_reg_line_edit = new QLineEdit(widget);
        wr_reg_line_edit->setObjectName(QStringLiteral("wr_reg_line_edit"));

        horizontalLayout_4->addWidget(wr_reg_line_edit);

        wr_val_label = new QLabel(widget);
        wr_val_label->setObjectName(QStringLiteral("wr_val_label"));

        horizontalLayout_4->addWidget(wr_val_label);

        wr_val_line_edit = new QLineEdit(widget);
        wr_val_line_edit->setObjectName(QStringLiteral("wr_val_line_edit"));

        horizontalLayout_4->addWidget(wr_val_line_edit);

        wr_button = new QPushButton(widget);
        wr_button->setObjectName(QStringLiteral("wr_button"));

        horizontalLayout_4->addWidget(wr_button);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);

        log_plain_text_edit = new QPlainTextEdit(widget);
        log_plain_text_edit->setObjectName(QStringLiteral("log_plain_text_edit"));
        log_plain_text_edit->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(log_plain_text_edit);

        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QStringLiteral("connect_button"));
        connect_button->setGeometry(QRect(750, 20, 85, 27));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(80, 440, 267, 82));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LightBTN4 = new QPushButton(widget1);
        LightBTN4->setObjectName(QStringLiteral("LightBTN4"));
        LightBTN4->setMinimumSize(QSize(80, 80));
        LightBTN4->setCheckable(true);

        horizontalLayout_2->addWidget(LightBTN4);

        LightBTN5 = new QPushButton(widget1);
        LightBTN5->setObjectName(QStringLiteral("LightBTN5"));
        LightBTN5->setMinimumSize(QSize(80, 80));
        LightBTN5->setCheckable(true);

        horizontalLayout_2->addWidget(LightBTN5);

        LightBTN6 = new QPushButton(widget1);
        LightBTN6->setObjectName(QStringLiteral("LightBTN6"));
        LightBTN6->setMinimumSize(QSize(80, 80));
        LightBTN6->setCheckable(true);

        horizontalLayout_2->addWidget(LightBTN6);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(80, 310, 269, 105));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(widget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LightBTN = new QPushButton(widget2);
        LightBTN->setObjectName(QStringLiteral("LightBTN"));
        LightBTN->setMinimumSize(QSize(80, 80));
        LightBTN->setCheckable(true);

        horizontalLayout->addWidget(LightBTN);

        LightBTN2 = new QPushButton(widget2);
        LightBTN2->setObjectName(QStringLiteral("LightBTN2"));
        LightBTN2->setMinimumSize(QSize(80, 80));
        LightBTN2->setCheckable(true);

        horizontalLayout->addWidget(LightBTN2);

        LightBTN3 = new QPushButton(widget2);
        LightBTN3->setObjectName(QStringLiteral("LightBTN3"));
        LightBTN3->setMinimumSize(QSize(80, 80));
        LightBTN3->setCheckable(true);

        horizontalLayout->addWidget(LightBTN3);


        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test_RTU", 0));
        label_4->setText(QApplication::translate("MainWindow", "Lamp", 0));
        label_5->setText(QApplication::translate("MainWindow", "Top", 0));
        label_6->setText(QApplication::translate("MainWindow", "Floor", 0));
        rd_reg_label->setText(QApplication::translate("MainWindow", "Reg:", 0));
        rd_reg_line_edit->setText(QApplication::translate("MainWindow", "0", 0));
        rd_count_label->setText(QApplication::translate("MainWindow", "Count", 0));
        rd_count_line_edit->setText(QApplication::translate("MainWindow", "1", 0));
        rd_button->setText(QApplication::translate("MainWindow", "Read", 0));
        wr_reg_label->setText(QApplication::translate("MainWindow", "Reg:", 0));
        wr_reg_line_edit->setText(QApplication::translate("MainWindow", "0", 0));
        wr_val_label->setText(QApplication::translate("MainWindow", "Value", 0));
        wr_val_line_edit->setText(QApplication::translate("MainWindow", "0", 0));
        wr_button->setText(QApplication::translate("MainWindow", "Write", 0));
        connect_button->setText(QApplication::translate("MainWindow", "Connect", 0));
        LightBTN4->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
        LightBTN5->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
        LightBTN6->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
        label->setText(QApplication::translate("MainWindow", "Door", 0));
        label_2->setText(QApplication::translate("MainWindow", "Counter Bar", 0));
        label_3->setText(QApplication::translate("MainWindow", "Bed", 0));
        LightBTN->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
        LightBTN2->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
        LightBTN3->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
