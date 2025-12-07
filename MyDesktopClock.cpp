#include "stdafx.h"
#include "MyDesktopClock.h"

MyDesktopClock::MyDesktopClock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyDesktopClockClass())
{
    ui->setupUi(this);
}

MyDesktopClock::~MyDesktopClock()
{
    delete ui;
}

