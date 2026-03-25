#include <iostream>

using namespace std;

int myNum = 5; // this is globa variable

void printNum() {
    // error because my num not declared inside the scope(function)
    // or not parameters are given
    int myNum = 2;

    // myNum in local and in global it's different
    cout << myNum << endl;
    
}
int main() { 
    // local = declared inside a function or block {}
    // global = declared outside of all functions

    int myNum = 1; // local var

    printNum();
    // 'myNum' was not declared in this scope

    // cout << myNum << endl;

    // if use :: it means using a global variable
    cout << ::myNum << endl;

    return 0;
}