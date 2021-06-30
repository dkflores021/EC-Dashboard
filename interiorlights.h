#ifndef INTERIORLIGHTS_H
#define INTERIORLIGHTS_H

#include <QDialog>

namespace Ui {
class InteriorLights;
}

class InteriorLights : public QDialog
{
    Q_OBJECT

public:
    explicit InteriorLights(QWidget *parent = nullptr);
    ~InteriorLights();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InteriorLights *ui;
    InteriorLights*interiorlights;
};

#endif // INTERIORLIGHTS_H
