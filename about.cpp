#include "about.h"
#include "ui_about.h"
#include "mainwindow.h"
static MainWindow *mainwindow;

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}

void About::on_pushButton_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

