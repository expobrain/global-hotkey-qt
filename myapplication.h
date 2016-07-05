#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H

#include <QApplication>

class MyApplication : public QApplication
{
    Q_OBJECT

public:
    MyApplication(int& argc, char** argv);
    void notifyHotkeyStatus(bool value);

signals:
    void hotkey(bool);
};

#endif // MYAPPLICATION_H
