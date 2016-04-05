#ifndef LED_H
#define LED_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class led;
}

class led : public QMainWindow
{
    Q_OBJECT

public:
    explicit led(QWidget *parent = 0);
    ~led();

private slots:
    void on_led1pushButton_clicked();

    void on_led2pushButton_clicked();

private:
    Ui::led *ui;

    char isLed1_on;
    char isLed2_on;

    QTcpSocket* tcpsocket;
};

#endif // LED_H
