#include "PZoomWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PZoomWindow w;
    w.show();
    return a.exec();
}
