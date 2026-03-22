#include <iostream>
using namespace std;

int main() {
    // double pi = 3.14159; 
    // pi = 12
    // without const the value can updated or re-assign, but pi is certain(pasti)
    const double pi = 3.14159; // so we added 'const' at beginning of the variable
    // pi = 12
    // if we re-assign will be error. error: assignment of read-only variable 'pi'
    double radius = 10;
    double circumference = 2 * pi * radius;

    cout << circumference << endl;
}