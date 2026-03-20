#include <iostream>
using namespace std;

int main() {

    // data types like you know is integer, float, string and more
    
    // or just use one line
    // int x = 5

    int x; // Declaration
    x = 5; // Value of x or assignment

    cout << x << endl;

    // sum x with y
    int y = 5;
    int sum = x + y;
    cout << sum << endl;

    // what about assign float in int type?
    int priceint = 91.99;
    cout << priceint << endl;
    // the return is 91, it's truncated (terpotong)
    
    // so we can use type double for float
    double priceflt = 91.99;
    cout << priceflt << endl;

    // Single character is use char
    char grade = 'A';
    cout << grade << endl;
    // it can be error if the grade value more than one char

    // Boolean, yap finnaly a bool
    bool student = true;
    cout << student << endl;
    // the return is 1 for true and 0 for false

    // string, objects that represent a sequence of text
    string name = "arman";
    // cout << name << endl;
    cout << "My Name Is: " << name << endl;

    return 0;
}