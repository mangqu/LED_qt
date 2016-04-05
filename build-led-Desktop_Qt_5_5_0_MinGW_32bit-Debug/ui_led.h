/********************************************************************************
** Form generated from reading UI file 'led.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LED_H
#define UI_LED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_led
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *led)
    {
        if (led->objectName().isEmpty())
            led->setObjectName(QStringLiteral("led"));
        led->resize(400, 300);
        menuBar = new QMenuBar(led);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        led->setMenuBar(menuBar);
        mainToolBar = new QToolBar(led);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        led->addToolBar(mainToolBar);
        centralWidget = new QWidget(led);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        led->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(led);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        led->setStatusBar(statusBar);

        retranslateUi(led);

        QMetaObject::connectSlotsByName(led);
    } // setupUi

    void retranslateUi(QMainWindow *led)
    {
        led->setWindowTitle(QApplication::translate("led", "led", 0));
    } // retranslateUi

};

namespace Ui {
    class led: public Ui_led {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LED_H
