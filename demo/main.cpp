#include <QApplication>
#include <QMainWindow>
#include "demo_window.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    DemoWindow w;
    w.show();
    return a.exec();
}
