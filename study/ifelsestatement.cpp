#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    // like if else in another programming language
    if (age >= 18) {
        cout << "Welcome to the page" << endl;
    } else if (age < 0) {
        cout << "You haven't born yet!" << endl;
    } else {
        cout << "You are not allowed" << endl;
    }
}