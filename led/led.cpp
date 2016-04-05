#include "led.h"
#include "ui_led.h"
#include <QByteArray>

led::led(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::led)
{
    ui->setupUi(this);
    ui->led1pushButton->setStyleSheet("background-color: rgb(170, 170, 127);");
    ui->led2pushButton->setStyleSheet("background-color: rgb(170, 170, 127);");
    isLed1_on = 0;
    isLed2_on = 0;

    tcpsocket = new QTcpSocket(this);
    tcpsocket->abort();
    tcpsocket->connectToHost(tr("172.24.120.30"),5000);
}

led::~led()
{
    delete ui;
}

void led::on_led1pushButton_clicked()
{
    if (isLed1_on == 0)
    {
        isLed1_on = 1;
        ui->led1pushButton->setStyleSheet("background-color: rgb(180, 10, 10);");

        QByteArray block;
        block.append(0x11);
        tcpsocket->write(block);
    }
    else if (isLed1_on == 1)
    {
        isLed1_on = 0;
        ui->led1pushButton->setStyleSheet("background-color: rgb(170, 170, 127);");

        QByteArray block;
        block.append(0x01);
        tcpsocket->write(block);
    }
}

void led::on_led2pushButton_clicked()
{
    if (isLed2_on == 0)
    {
        isLed2_on = 1;
        ui->led2pushButton->setStyleSheet("background-color: rgb(180, 10, 10);");

        QByteArray block;
        block.append(0x22);
        tcpsocket->write(block);
    }
    else if (isLed2_on == 1)
    {
        isLed2_on = 0;
        ui->led2pushButton->setStyleSheet("background-color: rgb(170, 170, 127);");

        QByteArray block;
        block.append(0x02);
        tcpsocket->write(block);
    }
}
