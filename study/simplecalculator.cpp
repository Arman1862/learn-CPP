#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "***********  CALCULATOR  ***********" << endl;

    cout << "Enter either (+ - / *): ";
    cin >> op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "The result is " << result << endl;

        break;
    case '-':
        result = num1 - num2;
        cout << "The result is " << result << endl;

        break;
    case '/':
        result = num1 / num2;
        cout << "The result is " << result << endl;

        break;
    case '*':
        result = num1 * num2;
        cout << "The result is " << result << endl;

        break;
    default:
        cout << "Invallid" << endl;
        break;
    }
    cout << "************************************";
    return 0;
}