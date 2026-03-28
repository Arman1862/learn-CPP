#include <iostream>

using namespace std;

int main() {
    // sizeof() is for determines(menentukan) the size in bytes of a:
    //          variable, data type, class, objects, etc

    double ipk = 5.5;
    cout << sizeof(ipk) << " bytes\n";
    // type double = 8
    
    string name = "Arman";
    cout << sizeof(name) << " bytes\n";
    // type string = 32
    
    char grade = 'A';
    cout << sizeof(grade) << " bytes\n";
    // type char = 1

    bool student = false;
    cout << sizeof(student) << " bytes\n";
    // type bool = 1

    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    // string grades[] = {"Arman", "Rafardhan"};
    cout << sizeof(grades) << " bytes\n";
    // array is based on the type * size of the type
    // examole: array of char and the size is 5
    // so char = 1, size = 5, then char * size = 1 * 5 = 5

    // and then we can know how many elements in array
    // with divide the array with the data type
    cout << sizeof(grades)/sizeof(char) << " elements\n";
     
    return 0;
}