#include <iostream>

using namespace std;

int main() {
    // null pointer is a pointer but holding a null value
    // nullptr = keyword represents a null pointer

    int *pointer = nullptr;

    int x = 123;
    // pointer = &x;

    if (pointer == nullptr) {
        cout << "address wasn't assigned\n";
    } else {
        cout << "adrress was assigned\n";
        cout << *pointer;
    }

    return 0;
}