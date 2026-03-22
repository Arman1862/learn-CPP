#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// hypotenuse is a sisi miring
int main() {
    double a;
    double b;
    double c;

    cout << "Input value of A: " << endl;
    cin >> a;
    
    cout << "Input value of B: " << endl;
    cin >> b;
    
    // c = sqrt(pow(a, 2) + pow(b, 2));
    // or
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    cout << "Result is " << c << endl;
}