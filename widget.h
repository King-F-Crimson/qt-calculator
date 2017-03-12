#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "calculator.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void updateDisplay(double value);

private slots:
    void on_button_0_clicked();
    void on_button_1_clicked();
    void on_button_2_clicked();
    void on_button_3_clicked();
    void on_button_4_clicked();
    void on_button_5_clicked();
    void on_button_6_clicked();
    void on_button_7_clicked();
    void on_button_8_clicked();
    void on_button_9_clicked();

    void on_button_add_clicked();
    void on_button_subtract_clicked();
    void on_button_multiply_clicked();
    void on_button_divide_clicked();

    void on_button_result_clicked();
    void on_button_point_clicked();

private:
    Ui::Widget *ui;
    Calculator calculator;
};

#endif // WIDGET_H
