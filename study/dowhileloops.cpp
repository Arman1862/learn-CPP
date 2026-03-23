#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    // while (number <= 0) {
    //     cout << "enter positive value: ";
    //     cin >> number;
    // }

    // skip the while(without do) and run this block
    // cout << "Your number is: " << number;

    // so we can use do while
    do
    {
        cout << "enter positive value: ";
        cin >> number;
    } while (number < 0);

    cout << "Your number is: " << number;

    return 0;
}