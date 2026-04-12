#include <iostream>

using namespace std;

// why use &(mem addrress operator)?
// because to make the references is a original not copied
void swap(string &x, string &y) {
    string temp;
    temp = x;
    x = y;
    y = temp;
}

// if not use & the swap function is not work
// void swap(string x, string y) {
//     string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

int main() {
    // swap variable like in python
    string x = "Kool-Aid";
    string y = "Water";

    // function to switch it
    swap(x, y);
    cout << "X:  " << x << endl;
    cout << "Y:  " << y << endl;

    return 0;
}