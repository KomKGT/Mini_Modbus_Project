/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LightBTN4;
    QPushButton *LightBTN5;
    QPushButton *LightBTN6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *LightBTN;
    QPushButton *LightBTN2;
    QPushButton *LightBTN3;
    QQuickWidget *quickWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setBaseSize(QSize(400, 400));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 420, 58, 14));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 420, 58, 14));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 420, 58, 14));
        Temp_Change = new QDial(centralWidget);
        Temp_Change->setObjectName(QString::fromUtf8("Temp_Change"));
        Temp_Change->setGeometry(QRect(640, 470, 151, 151));
        Temp_Change->setMaximumSize(QSize(19200, 1080));
        Temp_Change->setMinimum(20);
        Temp_Change->setMaximum(30);
        Temp_Change->setNotchesVisible(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(4, 29, 432, 264));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rd_reg_label = new QLabel(layoutWidget);
        rd_reg_label->setObjectName(QString::fromUtf8("rd_reg_label"));

        horizontalLayout_3->addWidget(rd_reg_label);

        rd_reg_line_edit = new QLineEdit(layoutWidget);
        rd_reg_line_edit->setObjectName(QString::fromUtf8("rd_reg_line_edit"));
        rd_reg_line_edit->setEnabled(true);

        horizontalLayout_3->addWidget(rd_reg_line_edit);

        rd_count_label = new QLabel(layoutWidget);
        rd_count_label->setObjectName(QString::fromUtf8("rd_count_label"));

        horizontalLayout_3->addWidget(rd_count_label);

        rd_count_line_edit = new QLineEdit(layoutWidget);
        rd_count_line_edit->setObjectName(QString::fromUtf8("rd_count_line_edit"));

        horizontalLayout_3->addWidget(rd_count_line_edit);

        rd_button = new QPushButton(layoutWidget);
        rd_button->setObjectName(QString::fromUtf8("rd_button"));

        horizontalLayout_3->addWidget(rd_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        wr_reg_label = new QLabel(layoutWidget);
        wr_reg_label->setObjectName(QString::fromUtf8("wr_reg_label"));

        horizontalLayout_4->addWidget(wr_reg_label);

        wr_reg_line_edit = new QLineEdit(layoutWidget);
        wr_reg_line_edit->setObjectName(QString::fromUtf8("wr_reg_line_edit"));

        horizontalLayout_4->addWidget(wr_reg_line_edit);

        wr_val_label = new QLabel(layoutWidget);
        wr_val_label->setObjectName(QString::fromUtf8("wr_val_label"));

        horizontalLayout_4->addWidget(wr_val_label);

        wr_val_line_edit = new QLineEdit(layoutWidget);
        wr_val_line_edit->setObjectName(QString::fromUtf8("wr_val_line_edit"));

        horizontalLayout_4->addWidget(wr_val_line_edit);

        wr_button = new QPushButton(layoutWidget);
        wr_button->setObjectName(QString::fromUtf8("wr_button"));

        horizontalLayout_4->addWidget(wr_button);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);

        log_plain_text_edit = new QPlainTextEdit(layoutWidget);
        log_plain_text_edit->setObjectName(QString::fromUtf8("log_plain_text_edit"));
        log_plain_text_edit->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(log_plain_text_edit);

        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QString::fromUtf8("connect_button"));
        connect_button->setGeometry(QRect(750, 20, 85, 27));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 440, 267, 82));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LightBTN4 = new QPushButton(layoutWidget1);
        LightBTN4->setObjectName(QString::fromUtf8("LightBTN4"));
        LightBTN4->setMinimumSize(QSize(80, 80));
        LightBTN4->setCheckable(true);

        horizontalLayout_2->addWidget(LightBTN4);

        LightBTN5 = new QPushButton(layoutWidget1);
        LightBTN5->setObjectName(QString::fromUtf8("LightBTN5"));
        LightBTN5->setMinimumSize(QSize(80, 80));
        LightBTN5->setCheckable(true);

        horizontalLayout_2->addWidget(LightBTN5);

        LightBTN6 = new QPushButton(layoutWidget1);
        LightBTN6->setObjectName(QString::fromUtf8("LightBTN6"));
        LightBTN6->setMinimumSize(QSize(80, 80));
        LightBTN6->setCheckable(true);

        horizontalLayout_2->addWidget(LightBTN6);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 310, 269, 108));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LightBTN = new QPushButton(layoutWidget2);
        LightBTN->setObjectName(QString::fromUtf8("LightBTN"));
        LightBTN->setMinimumSize(QSize(80, 80));
        LightBTN->setCheckable(true);

        horizontalLayout->addWidget(LightBTN);

        LightBTN2 = new QPushButton(layoutWidget2);
        LightBTN2->setObjectName(QString::fromUtf8("LightBTN2"));
        LightBTN2->setMinimumSize(QSize(80, 80));
        LightBTN2->setCheckable(true);

        horizontalLayout->addWidget(LightBTN2);

        LightBTN3 = new QPushButton(layoutWidget2);
        LightBTN3->setObjectName(QString::fromUtf8("LightBTN3"));
        LightBTN3->setMinimumSize(QSize(80, 80));
        LightBTN3->setCheckable(true);

        horizontalLayout->addWidget(LightBTN3);


        verticalLayout_3->addLayout(horizontalLayout);

        quickWidget = new QQuickWidget(centralWidget);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setGeometry(QRect(500, 60, 400, 400));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        quickWidget->setSource(QUrl(QString::fromUtf8("qrc:/switcher.qml")));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Test_RTU", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lamp", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Top", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Floor", nullptr));
        rd_reg_label->setText(QCoreApplication::translate("MainWindow", "Reg:", nullptr));
        rd_reg_line_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rd_count_label->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        rd_count_line_edit->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        rd_button->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        wr_reg_label->setText(QCoreApplication::translate("MainWindow", "Reg:", nullptr));
        wr_reg_line_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        wr_val_label->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        wr_val_line_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        wr_button->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        connect_button->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        LightBTN4->setText(QCoreApplication::translate("MainWindow", "Light:OFF", nullptr));
        LightBTN5->setText(QCoreApplication::translate("MainWindow", "Light:OFF", nullptr));
        LightBTN6->setText(QCoreApplication::translate("MainWindow", "Light:OFF", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Door", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Counter Bar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Bed", nullptr));
        LightBTN->setText(QCoreApplication::translate("MainWindow", "Light:OFF", nullptr));
        LightBTN2->setText(QCoreApplication::translate("MainWindow", "Light:OFF", nullptr));
        LightBTN3->setText(QCoreApplication::translate("MainWindow", "Light:OFF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
