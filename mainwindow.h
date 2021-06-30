#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "about.h"
#include "interiorlights.h"
#include "brightnesscontrol.h"
//static int brightnessValue = 0;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_toggled(bool checked);

private:
    Ui::MainWindow *ui;

    About*about;
    InteriorLights*interiorlights;
    BrightnessControl*brightnesscontrol;
};
#endif // MAINWINDOW_H
