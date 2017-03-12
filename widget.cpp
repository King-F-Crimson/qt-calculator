#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QObject::connect(&calculator, &Calculator::valueChanged,
                     this, &Widget::updateDisplay);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updateDisplay(double value)
{
    QString str;
    str.setNum(value, 'g', 15);
    ui->textBrowser->setPlainText(str);
}


void Widget::on_button_0_clicked()
{
    calculator.inputNumber(0);
}

void Widget::on_button_1_clicked()
{
    calculator.inputNumber(1);
}

void Widget::on_button_2_clicked()
{
    calculator.inputNumber(2);
}

void Widget::on_button_3_clicked()
{
    calculator.inputNumber(3);
}

void Widget::on_button_4_clicked()
{
    calculator.inputNumber(4);
}

void Widget::on_button_5_clicked()
{
    calculator.inputNumber(5);
}

void Widget::on_button_6_clicked()
{
    calculator.inputNumber(6);
}

void Widget::on_button_7_clicked()
{
    calculator.inputNumber(7);
}

void Widget::on_button_8_clicked()
{
    calculator.inputNumber(8);
}

void Widget::on_button_9_clicked()
{
    calculator.inputNumber(9);
}

void Widget::on_button_add_clicked()
{
    calculator.applyOperation(Calculator::Operation::add);
}

void Widget::on_button_subtract_clicked()
{
    calculator.applyOperation(Calculator::Operation::subtract);
}

void Widget::on_button_multiply_clicked()
{
    calculator.applyOperation(Calculator::Operation::multiply);
}

void Widget::on_button_divide_clicked()
{
    calculator.applyOperation(Calculator::Operation::divide);
}

void Widget::on_button_result_clicked()
{
    calculator.getResult();
}

void Widget::on_button_point_clicked()
{
    calculator.addDecimalPoint();
}
