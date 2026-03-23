#include <iostream>

using namespace std;

// just like ternary operator in other programming language
int main() {
    bool hungry = false;

    string is_hungry = hungry ? "You're hungry" : "Okay good";

    cout << is_hungry << endl;
    return 0;
}