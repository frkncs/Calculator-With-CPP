#include <iostream>
#include <Windows.h>
#include "Math.h"

using namespace std;

int main()
{
    while (true)
    {
        double *number1 = new double;
        double *number2 = new double;
        double *result = new double;
        char *aOperator = new char;

        cout << "Enter First Number: ";
        cin >> *number1;

        cout << "\nSelect Operator;\n(+) Sum\n(-) Sub\n(* or x) Multiply\n(/) Divide\n(q) Exit\nSelect: ";
        cin >> *aOperator;

        if (*aOperator == 'q' || *aOperator == 'Q')
        {
            cout << "\nGoodbye!" << endl;

            delete number1, number2, result, aOperator;

            break;
        }

        cout << "\nEnter Second Number: ";
        cin >> *number2;

        Math *math = new Math();
        *result = math -> ShowResult(*number1, *number2, *aOperator);

        cout << "\nResult: " << *result << endl << endl;

        delete number1, number2, result, math, aOperator;
    }

    system("pause");

    return 0;
}
