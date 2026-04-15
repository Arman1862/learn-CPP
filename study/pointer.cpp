#include <iostream>

using namespace std;

int main() {
    // pointer is a variable stores a memory address
    // of another variable
    // sometimes it's easier to work with and address

    // & = address operator
    // * = dereference operator

    // the analogy:
    // rather than delivering free pizzas to homes
    // it's better to tell where the addrress free pizzas is

    string name = "Arman";
    int age = 18;

    string *pName = &name;
    int *pAge = &age;

    // cout << pName << endl; // the output is mem-address
    // cout << *pName << endl; // output is a value in that adrress
    // cout << pAge << endl; 
    // cout << *pAge << endl; 

    string pizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    return 0;
}