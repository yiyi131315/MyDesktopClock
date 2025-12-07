#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyDesktopClock.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MyDesktopClockClass; };
QT_END_NAMESPACE

class MyDesktopClock : public QMainWindow
{
    Q_OBJECT

public:
    MyDesktopClock(QWidget *parent = nullptr);
    ~MyDesktopClock();

private:
    Ui::MyDesktopClockClass *ui;
};

