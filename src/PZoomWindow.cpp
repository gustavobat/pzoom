#include "PZoomWindow.h"
#include "./ui_PZoomWindow.h"

PZoomWindow::PZoomWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PZoomWindow)
{
    ui->setupUi(this);
}

PZoomWindow::~PZoomWindow()
{
    delete ui;
}

