#ifndef LED_H
#define LED_H

#include <QMainWindow>

namespace Ui {
class led;
}

class led : public QMainWindow
{
    Q_OBJECT

public:
    explicit led(QWidget *parent = 0);
    ~led();

private:
    Ui::led *ui;
};

#endif // LED_H
