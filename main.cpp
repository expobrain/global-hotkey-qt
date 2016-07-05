#include "mainwindow.h"
#include "globaleventfilter.h"
#include "myapplication.h"


int main(int argc, char *argv[])
{
    MyApplication a(argc, argv);
    a.installEventFilter(new GlobalEventFilter(a.instance()));

    MainWindow w1, w2;

    w1.show();
    w2.show();
    
    return a.exec();
}
