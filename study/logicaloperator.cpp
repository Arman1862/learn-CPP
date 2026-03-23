#include <iostream>

using namespace std;

int main() {
    // just like another programming language
    // && = to check 2 conditions are true
    // || = to check 2 conditions at least one true
    // ! = to reverse the boolean value

    int temperature = 25;
    bool sunny = true;

    // Example 1: Using && (AND)
    // Both conditions must be true for the block to execute
    if (temperature >= 20 && sunny) {
        cout << "It's a perfect day for a picnic!" << endl;
    } else {
        cout << "Maybe another day for a picnic." << endl;
    }

    int age = 16;
    bool hasLicense = false;

    // Example 2: Using || (OR)
    // At least one condition must be true for the block to execute
    if (age >= 18 || hasLicense) {
        cout << "You can drive a car." << endl;
    } else {
        cout << "You cannot drive a car yet." << endl;
    }

    // Example 3: Using ! (NOT)
    // Reverses the boolean value
    cout << "Is it NOT sunny? " << (!sunny ? "Yes" : "No") << endl;
    return 0;
}