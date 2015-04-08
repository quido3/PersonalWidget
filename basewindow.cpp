#include "basewindow.h"
#include "ui_basewindow.h"

BaseWindow::BaseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseWindow)
{
    ui->setupUi(this);
    //jaa
}

BaseWindow::~BaseWindow()
{
    delete ui;
}
