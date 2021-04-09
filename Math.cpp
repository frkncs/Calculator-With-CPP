#include "Math.h"
#include <iostream>

using namespace std;

double Math::ShowResult(double number1, double number2, char aOperator)
{
    Math::number1 = number1;
    Math::number2 = number2;

    if (aOperator == '+')
    {
        return Math::Add();
    }
    else if (aOperator == '-')
    {
        return Math::Sub();
    }
    else if (aOperator == '*' || aOperator == 'x' || aOperator == 'X')
    {
        return Math::Multiply();
    }
    else if (aOperator == '/')
    {
        return Math::Divide();
    }

    return 0;
}

double Math::Add()
{
    return Math::number1 + Math::number2;
}
double Math::Sub()
{
    return Math::number1 - Math::number2;
}
double Math::Multiply()
{
    return Math::number1 * Math::number2;
}
double Math::Divide()
{
    if (Math::number2 <= 0)
    {
        cout << "\nNot Defined!" << endl;
        return 0;
    }

    return Math::number1 / Math::number2;
}
