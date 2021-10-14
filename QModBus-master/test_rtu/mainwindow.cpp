#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //add
    counter = 1;
    counterBtn2= 1;
    counterBtn3 = 1;
    counterBtn4 = 1;
    counterBtn5 = 1;
    counterBtn6 = 1;
    //add
    QObject::connect(&mb,  SIGNAL(error(QModBus::ModBusError)),
                     this, SLOT(process_error(QModBus::ModBusError)));



    QObject::connect(&mb,  &QModBus_RTU::connected,
                     this, &MainWindow::change_status);     //Second step

    QObject::connect(&mb,  SIGNAL(disconnected()),
                     this, SLOT(change_status()));          //ถ้ากดปุ่ม connect อีกครั้ง step



    QObject::connect(ui->connect_button, SIGNAL(clicked()),
                     this,  SLOT(connect_btn_clicked()));    //First step (กด connect ครั้งแรก)



    //read button
    QObject::connect(ui->rd_button, SIGNAL(clicked()),
                     this, SLOT(read_regs()));


    QObject::connect(&mb,  SIGNAL(response_to_read_regs(int)),
                     this, SLOT(response_to_read_regs(int)));



    //write button
    QObject::connect(ui->wr_button, SIGNAL(clicked()),
                     this, SLOT(write_reg()));


    QObject::connect(&mb,  SIGNAL(response_to_write_reg(int)),
                     this, SLOT(response_to_write_reg(int)));
}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::connect_btn_clicked() //เป็น Signal-Slot ที่ Qt สร้างอัตโนมัติ
{
    qDebug() << "Pass";

    if( mb.is_connected() ) //ถ้าปัจุบันเชื่อมต่ออยู่
        disconnect_from_dev();//ให้ตัดการเชื่อมต่อ
    else//นอกจากนั้น
        connect_to_dev();//ให้เชื่อมต่อ
}



void MainWindow::connect_to_dev()
{

    ui->connect_button->setEnabled(false);

    //set ค่าต่างๆเองตรงนี้
    //GUI param to QModBus_RTU object
    mb.device    = "/dev/ttyUSB0";
    mb.baudrate  = 9600;
    mb.parity    = 'N';
    mb.data_bit  = 8;
    mb.stop_bit  = 1;
    mb.set_slave(1);


    //show param in Edit
    ui->log_plain_text_edit->appendPlainText(QString("###############################"));
    ui->log_plain_text_edit->appendPlainText(QString("Device   is: %1").arg(mb.device));
    ui->log_plain_text_edit->appendPlainText(QString("Slave    is: %1").arg(mb.get_slave()));
    ui->log_plain_text_edit->appendPlainText(QString("Baudrate is: %1").arg(mb.baudrate));
    ui->log_plain_text_edit->appendPlainText(QString("Parity   is: %1").arg(mb.parity));
    ui->log_plain_text_edit->appendPlainText(QString("Data_bit is: %1").arg(mb.data_bit));
    ui->log_plain_text_edit->appendPlainText(QString("Stop_bit is: %1").arg(mb.stop_bit));
    ui->log_plain_text_edit->appendPlainText(QString("-------------------------------"));


    mb.connect();
}



void MainWindow::disconnect_from_dev()
{
    ui->connect_button->setEnabled(false);
    mb.disconnect();
}



void MainWindow::read_regs()
{

    int addr  = ui->rd_reg_line_edit->text().toInt();
    int count = ui->rd_count_line_edit->text().toInt();

    if( count > MODBUS_MAX_READ_REGISTERS)
    {
        ui->log_plain_text_edit->appendPlainText(QString("Error count reg is: %1").arg(count));
        ui->log_plain_text_edit->insertPlainText(QString("Max count reg is: %1").arg(MODBUS_MAX_READ_REGISTERS));

        return;
    }

    if( count <= 0)
    {
        ui->log_plain_text_edit->appendPlainText(QString("Error count reg is: %1").arg(count));
        return;
    }


    ui->log_plain_text_edit->appendPlainText(QString("Read Start register: %1 ").arg(addr));
    ui->log_plain_text_edit->insertPlainText(QString("Count: %1").arg(count));

    ui->rd_button->setEnabled(false);

    mb.read_regs(addr, count, rd_buf);
}



void MainWindow::write_reg()
{
    int addr  = ui->wr_reg_line_edit->text().toInt();
    int value = ui->wr_val_line_edit->text().toInt();


    ui->log_plain_text_edit->appendPlainText(QString("Write to register: %1 ").arg(addr));
    ui->log_plain_text_edit->insertPlainText(QString("value: %1").arg(value));

    ui->wr_button->setEnabled(false);

    //add
    ui->LightBTN->setEnabled(false);
    //add
    mb.write_reg(addr, value);
}



void MainWindow::response_to_read_regs(int status)
{
    int i;

    ui->rd_button->setEnabled(true);

    if( status <= 0 )
        return;


    ui->log_plain_text_edit->appendPlainText(QString("Reading regs: %1").arg(status));

    for(i = 0; i < status; i++)
    {
        ui->log_plain_text_edit->appendPlainText(QString("reg[%1] == %2").arg(i).arg(rd_buf[i]));
    }
}



void MainWindow::response_to_write_reg(int status)
{
    ui->wr_button->setEnabled(true);
    //add
    ui->LightBTN->setEnabled(true);
    //add

    if( status == 1 )
    {
        ui->log_plain_text_edit->appendPlainText(QString("Write done"));
    }
}



void MainWindow::process_error(QModBus::ModBusError error)
{
    //show error in Edit
    ui->log_plain_text_edit->appendPlainText(QString("Error is: %1  strerror: ").arg(error));
    ui->log_plain_text_edit->insertPlainText(QString::fromUtf8(mb.get_strerror()));


    switch (error)
    {

        case QModBus::NoConnectionError:
        case QModBus::CreateError:
        case QModBus::ConnectionError:
        {
            ui->connect_button->setEnabled(true);
            break;
        }


        case QModBus::ReadRegsError:
        {
            ui->rd_button->setEnabled(true);
            break;
        }


        case QModBus::WriteRegError:
        {
            ui->wr_button->setEnabled(true);
            break;
        }


        default:
            break;
    }

}



void MainWindow::change_status()
{

    ui->connect_button->setEnabled(true);
    qDebug() << "Check";

    if( mb.is_connected() )
    {
        ui->log_plain_text_edit->appendPlainText("------ connected ------");
        ui->connect_button->setText("Disconnect");
        return;
    }


    ui->log_plain_text_edit->appendPlainText("------ disconnected ------\n");
    ui->connect_button->setText("Connect");
}

void MainWindow::on_LightBTN_clicked()
{
    if(counter%2==1)
    {

        ui->LightBTN->setText("Light:ON");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("2");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("130");

        write_reg();
        counter++;
    }
    else if(counter%2==0)
    {
        ui->LightBTN->setText("Light:OFF");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("2");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("0");

        write_reg();
        counter = 1;
    }

}

void MainWindow::on_LightBTN2_clicked()
{

    if(counterBtn2%2==1)
    {

        ui->LightBTN2->setText("Light:ON");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("3");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("1");

        write_reg();
        counterBtn2++;
    }
    else if(counterBtn2%2==0)
    {
        ui->LightBTN2->setText("Light:OFF");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("3");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("0");

        write_reg();
        counterBtn2 = 1;
    }

}

void MainWindow::on_LightBTN3_clicked()
{

    if(counterBtn3%2==1)
    {

        ui->LightBTN3->setText("Light:ON");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("4");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("1");

        write_reg();
        counterBtn3++;
    }
    else if(counterBtn3%2==0)
    {
        ui->LightBTN3->setText("Light:OFF");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("4");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("0");

        write_reg();
        counterBtn3 = 1;
    }

}

void MainWindow::on_LightBTN4_clicked()
{

    if(counterBtn4%2==1)
    {

        ui->LightBTN4->setText("Light:ON");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("5");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("1");

        write_reg();
        counterBtn4++;
    }
    else if(counterBtn4%2==0)
    {
        ui->LightBTN4->setText("Light:OFF");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("5");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("0");

        write_reg();
        counterBtn4 = 1;
    }

}

void MainWindow::on_LightBTN5_clicked()
{

    if(counterBtn5%2==1)
    {

        ui->LightBTN5->setText("Light:ON");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("6");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("1");

        write_reg();
        counterBtn5++;
    }
    else if(counterBtn5%2==0)
    {
        ui->LightBTN5->setText("Light:OFF");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("6");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("0");

        write_reg();
        counterBtn5 = 1;
    }

}

void MainWindow::on_LightBTN6_clicked()
{

    if(counterBtn6%2==1)
    {

        ui->LightBTN6->setText("Light:ON");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("7");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("1");

        write_reg();
        counterBtn6++;
    }
    else if(counter%2==0)
    {
        ui->LightBTN6->setText("Light:OFF");
        ui->wr_reg_line_edit->clear();
        ui->wr_reg_line_edit->insert("7");

        ui->wr_val_line_edit->clear();
        ui->wr_val_line_edit->insert("0");

        write_reg();
        counterBtn6 = 1;
    }

}

//ให้กรณีของ Air con อยู่คนละ slave(ต้อง connect อันใหม่ด้วย)
void MainWindow::on_Temp_Change_valueChanged(int value)
{
    ui->wr_reg_line_edit->clear();
    ui->wr_reg_line_edit->insert("2");


    ui->wr_val_line_edit->clear();
    QString v = QString::number(value);
    ui->wr_val_line_edit->insert(v);
    write_reg();
}
