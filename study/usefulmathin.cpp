#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x = 2; int y = 4; int z;
    double pi = 3.14159265358979323846;
    z = max(x, y);
    // max is for biggest value
    cout << "The max value is: " << z << endl;
    
    z = min(x, y);
    // min is for smallest value
    cout << "The min value is: " << z << endl;
    
    // pow(pangkat)
    z = pow(x, y);
    cout << "The pow value is: " << z << endl;
    
    // sqrt(akar)
    z = sqrt(y);
    cout << "The sqrt value is: " << z << endl;
    
    // absolute
    z = abs(-y);
    cout << "The absolut value is: " << z << endl;

    // round(normal round(base on approach))
    z  = round(pi);
    cout << "The round value is: " << z << endl;
    
    // ceil = round up
    z = ceil(pi);
    cout << "The ceil value is: " << z << endl;
    
    // floor = round down like int
    z = floor(3.99);
    cout << "The floor value is: " << z << endl;
}