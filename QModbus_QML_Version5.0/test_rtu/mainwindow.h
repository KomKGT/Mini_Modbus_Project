#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qmodbus.h"
#include <QQuickItem>

#include <QTimer>



namespace Ui
{
    class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:

        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();


    public slots:

        void connect_btn_clicked();
        void connect_to_dev();
        void disconnect_from_dev();

        void read_regs();
        void write_reg();

        void response_to_read_regs(int status);
        void response_to_write_reg(int status);

        void process_error(QModBus::ModBusError error);
        void change_status();



private slots:

        //Switch Slot ใน QML
        void sw_01_on(bool checked);
        void sw_02_on(bool checked);
        void sw_03_all(bool checked);

        //อ่านค่า Temp
        void readTemp();

private:

        Ui::MainWindow *ui;

        QModBus_RTU  mb;

        uint16_t  rd_buf[MODBUS_MAX_READ_REGISTERS];
        //add
        uint8_t counter;
        //add


        //Switch ใน QML
        QQuickItem *root_object_sw01;
        QQuickItem *root_object_sw02;
        QQuickItem *root_object_sw03;

        //อุปกรณ์ 01 (Write Relays)
        int slaveNumber_ETTRelay = 2;
        int address_ETTRelay = 1;
        int value_ETTRelay = 900;
        //อุปกรณ์ 02 (Read Temperature)
        int slaveNumber_West= 1;
        int address_West = 1;
        int count_West = 1;

        bool flag_busy;
        int previous_tempData;
        int tempData;

        //อ่านค่า Temp จาก CPP มาโชว์ใน QML
        QTimer *timer;
        QQuickItem *root_object_temp;
        int keepStatus;
};



#endif // MAINWINDOW_H
