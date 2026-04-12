#include <iostream>
#include <string>

using namespace std;

int main() {
    // memory adress is a location in memory where data is stored
    // memory address can accessed with $ (address-of operator)

    string name = "Arman";
    int age = 18;
    bool student = true;

    cout << &name << endl; // 232133753552
    cout << &age << endl; // 232133753548
    cout << &student << endl; // 232133753547
    // string much have memory than int or bool


    // the ouput is hexadecimal
    // use tools to convert hex to dec
    // like https://www.binaryhexconverter.com/hex-to-decimal-converter

    return 0;
}