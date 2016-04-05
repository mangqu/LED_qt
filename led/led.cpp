#include "led.h"
#include "ui_led.h"

led::led(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::led)
{
    ui->setupUi(this);
}

led::~led()
{
    delete ui;
}
