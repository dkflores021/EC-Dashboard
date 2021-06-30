#include "interiorlights.h"
#include "ui_interiorlights.h"
#include "mainwindow.h"
static MainWindow *mainwindow;


InteriorLights::InteriorLights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InteriorLights)
{
    ui->setupUi(this);
}

InteriorLights::~InteriorLights()
{
    delete ui;
}


void InteriorLights::on_pushButton_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

