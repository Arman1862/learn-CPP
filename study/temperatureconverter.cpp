#include <iostream>

using namespace std;

int main() {
    double temp; char unit;
    cout << "**********  Temperature Conversion  **********\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celcius\n";
    cout << "What unit do you want to convert: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Input the temperatur in celcius: ";
        cin >> temp;

        temp = (temp * 1.8) + 32;
        cout << "The fahrenheit temperature is: " << temp << endl;  
    } 
    else if (unit == 'C' || unit == 'c') {
        cout << "Input the temperatur in fahrenheit: ";
        cin >> temp;
    
        temp = (temp - 32) / 1.8;
        cout << "The celcius temperature is: " << temp << endl;
    }
    else {
        cout << "You're not enter F or C\n";
    }


    cout << "**********************************************";

    return 0;
}