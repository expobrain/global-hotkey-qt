#include "mainwindow.h"
#include "globaleventfilter.h"
#include "myapplication.h"


int main(int argc, char *argv[])
{
    MyApplication a(argc, argv);
    a.installEventFilter(new GlobalEventFilter(a.instance()));

    MainWindow w1, w2;

    w1.setWindowTitle("Window 1");
    w1.resize(WINDOW_SIZE);
    w1.move(0, 0);
    w1.show();

    w2.setWindowTitle("Window 2");
    w2.resize(WINDOW_SIZE);
    w2.move(WINDOW_SIZE.width() / 2, WINDOW_SIZE.height() / 2);
    w2.show();
    
    return a.exec();
}
