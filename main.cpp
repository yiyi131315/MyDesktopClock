#include "stdafx.h"
#include "MyDesktopClock.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyDesktopClock window;
    window.show();
    return app.exec();
}
