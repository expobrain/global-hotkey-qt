#include "myapplication.h"


MyApplication::MyApplication(int& argc, char** argv):
    QApplication(argc, argv)
{
}


void MyApplication::notifyHotkeyStatus(bool value) {
    emit hotkey(value);
}
