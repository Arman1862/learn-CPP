#include <iostream>

using namespace std;

int main() {
    // pseudo-random

    // seed for the random method
    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // why plus 1, without that the remainder will be between 1-5
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}