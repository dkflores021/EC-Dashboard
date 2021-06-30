#include "brightnesscontrol.h"
#include "ui_brightnesscontrol.h"
#include "mainwindow.h"
static MainWindow *mainwindow;
static int brightnessValue = 0;

BrightnessControl::BrightnessControl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BrightnessControl)
{
    ui->setupUi(this);
    ui->progressBar->setValue(brightnessValue);
    ui->horizontalSlider->setValue(brightnessValue);
}

BrightnessControl::~BrightnessControl()
{
    delete ui;
}

void BrightnessControl::on_pushButton_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

void BrightnessControl::on_horizontalSlider_valueChanged(int value)
{
    brightnessValue = value;
    ui->progressBar->setValue(brightnessValue);
}

