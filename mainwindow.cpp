#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Setup UI
    ui->setupUi(this);

    // Connect signals
    connect(qApp, SIGNAL(hotkey(bool)), this, SLOT(onHotkey(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onHotkey(bool state) {
    if (state) {
        setStyleSheet("background-color: green");
    } else {
        setStyleSheet("");
    }
}
