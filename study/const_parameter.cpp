#include <iostream>

using namespace std;
// const parameter is for make sure the parameter value
// can't re-assigned

void printInfo(const string name, const int age) {
    // name = "Halo";
    // error because name is contant 
    cout <<  name << endl;
    cout <<  age << endl;
}

int main() {
    string name = "arman";
    int age = 18;

    printInfo(name, age);

    return 0;
}