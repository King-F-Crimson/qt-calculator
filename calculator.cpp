#include "calculator.h"
#include <iostream>

Calculator::Calculator()
:   activeValue(0)
,   bufferValue(0)
{

}

void Calculator::inputNumber(int num)
{
    activeValue = activeValue * 10 + num;
    emit valueChanged(activeValue);
}

void Calculator::applyOperation(Operation operation)
{
    bufferValue = activeValue;
    activeValue = 0;
    currentOperation = operation;
}

void Calculator::addDecimalPoint()
{
    isDecimal = true;
}

void Calculator::getResult()
{
    double result = 0;

    switch(currentOperation)
    {
        case Operation::add        : result = bufferValue + activeValue; break;
        case Operation::subtract   : result = bufferValue - activeValue; break;
        case Operation::multiply   : result = bufferValue * activeValue; break;
        case Operation::divide     : result = bufferValue / activeValue; break;
    }

    activeValue = 0;
    bufferValue = result;
    emit valueChanged(bufferValue);
}

QString Calculator::getDisplay()
{
    QString str;
    return str.setNum(activeValue);
}
