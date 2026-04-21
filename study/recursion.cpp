#include <iostream>

using namespace std;

int factorial(int number) {
    if(number <= 1) {
        return 1;
    }
    return number * factorial(number - 1);

}

int main() {
    // recursion is a technique where we call the function in to the function it self
    int number;

    cout << "Enter your number to factorial: ";
    cin >> number;

    cout << factorial(number);

    return 0;
}