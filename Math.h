#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED
#include <iostream>

using namespace std;

class Math
{

private:
    // Variables
    double number1, number2;

    // Methods
    double Add();
    double Sub();
    double Multiply();
    double Divide();

public:

    // Methods
    double ShowResult(double, double, char); // This takes 3 argument: Number1, Number2, Operator. And returns Result
};


#endif
