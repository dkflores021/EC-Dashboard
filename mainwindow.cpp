#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "interiorlights.h"
#include "brightnesscontrol.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    hide();
    about = new About(this);
    about->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    interiorlights = new InteriorLights(this);
    interiorlights->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    brightnesscontrol = new BrightnessControl(this);
    brightnesscontrol->show();

}
