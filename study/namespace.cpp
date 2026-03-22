#include <iostream>
using namespace std;

namespace first {
    // so x in namespace(first) its different than other x outside
    int x = 12;
}

namespace second {
    int x = 14;
}

int main() {
    // can type "using namespace first" to save little bit of typing
    int x = 10;
    // redeclare(not reassign) the same name variable will be make a error while run the program
    // int x = 10; error: redeclaration of 'int x'
    // so we can use namespace(its like scop)
    
    // to use x in namespace first we must use namespace name and ::(scope resolution)
    // ::/scope resolution is used to identify or specify the identifier inside the namespace
    
    cout << "x in first namespace: " << first::x << endl; // it will return 12, because called the x in first namespace
    cout << "x in second namespace: " << second::x << endl; // it will return 14, because called the x in second namespace
    cout << "x in main function" << x;
    return 0;
}