#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

const QSize WINDOW_SIZE = QSize(300, 300);

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void onHotkey(bool state);
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
