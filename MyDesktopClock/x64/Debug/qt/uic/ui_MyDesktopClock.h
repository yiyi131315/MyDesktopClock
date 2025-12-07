/********************************************************************************
** Form generated from reading UI file 'MyDesktopClock.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDESKTOPCLOCK_H
#define UI_MYDESKTOPCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDesktopClockClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyDesktopClockClass)
    {
        if (MyDesktopClockClass->objectName().isEmpty())
            MyDesktopClockClass->setObjectName("MyDesktopClockClass");
        MyDesktopClockClass->resize(600, 400);
        menuBar = new QMenuBar(MyDesktopClockClass);
        menuBar->setObjectName("menuBar");
        MyDesktopClockClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyDesktopClockClass);
        mainToolBar->setObjectName("mainToolBar");
        MyDesktopClockClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyDesktopClockClass);
        centralWidget->setObjectName("centralWidget");
        MyDesktopClockClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyDesktopClockClass);
        statusBar->setObjectName("statusBar");
        MyDesktopClockClass->setStatusBar(statusBar);

        retranslateUi(MyDesktopClockClass);

        QMetaObject::connectSlotsByName(MyDesktopClockClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyDesktopClockClass)
    {
        MyDesktopClockClass->setWindowTitle(QCoreApplication::translate("MyDesktopClockClass", "MyDesktopClock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDesktopClockClass: public Ui_MyDesktopClockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDESKTOPCLOCK_H
