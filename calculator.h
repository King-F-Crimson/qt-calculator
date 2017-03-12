#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <QString>

class Calculator : public QObject
{
    Q_OBJECT

public:
    Calculator();

    enum class Operation {
        add,
        subtract,
        multiply,
        divide
    };

    QString getDisplay();

public slots:
    void inputNumber(int num);
    void applyOperation(Operation operation);
    void addDecimalPoint();
    void getResult();

signals:
    void valueChanged(double newValue);

private:
    double activeValue;
    double bufferValue;
    bool   isDecimal;
    Operation currentOperation;
};

#endif // CALCULATOR_H
