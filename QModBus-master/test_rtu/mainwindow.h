#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qmodbus.h"





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
        void on_LightBTN_clicked();

        void on_LightBTN2_clicked();

        void on_LightBTN3_clicked();

        void on_LightBTN4_clicked();

        void on_LightBTN5_clicked();

        void on_LightBTN6_clicked();

        void on_Temp_Change_valueChanged(int value);

private:

        Ui::MainWindow *ui;

        QModBus_RTU  mb;

        uint16_t  rd_buf[MODBUS_MAX_READ_REGISTERS];
        //add
        uint8_t counter;
        //add
        uint8_t counterBtn2;
        uint8_t counterBtn3;
        uint8_t counterBtn4;
        uint8_t counterBtn5;
        uint8_t counterBtn6;

};



#endif // MAINWINDOW_H
