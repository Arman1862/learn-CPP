#include <iostream>

using namespace std;

// just return in function, to give the value out
// but change the void based on the returned data type

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length  * length;
}

int main() {
    double length = 5;
    double area = square(length);
    double volume = cube(length);

    cout << "The square is: " << area << endl;
    cout << "The volume is: " << volume << endl;

    return 0;
}