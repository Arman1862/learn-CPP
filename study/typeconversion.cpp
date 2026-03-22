#include <iostream>
#include <iomanip> // to see precision/detailed float
using namespace std;

int main() {
    // implicit = automatically convert
    int x = 3.14159265368979;
    // output will be truncated to 3
    cout << x << endl;

    // explicit = change value to with new data type, the method: (int/new type) <value>
    x = (double) 3.14159265358979;
    cout << x << endl; // why doesn't work and still 3?

    // because the container(int) don't know a float number(.xxxx)
    // so the right side(value) still 3

    // double y = (int) 3.14159265358979323846;
    double y = 3.14159265358979323846;
    // cout << y << endl; 
    // output: 3.14159. why just 5-6 digit behind coma? because its default from "cout"
    cout << setprecision(15) << y << endl; // why 15? karena harus pake "long double" buat lebih dari 17 digit.
    // komputernya gak bisa inget lebih dari itu makanya korup
    y = (int) y;
    // so its work. the container variable know a float but we use int in right side the limit/boundary the value
    cout << y << endl;

}