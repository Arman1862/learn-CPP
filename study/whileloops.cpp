#include <iostream>
#include <string>

using namespace std;

int main() {
    // like while loop in other programming language
    // its like if but we can repeat it

    string name;

    // without loop the program just running one time
    // if (name.empty()) {
    //         cout << "Enter your name: ";
    //         getline(cin, name);
    // }

    // but if we want repeat it, force user to input their name
    while (name.empty())
    {
        cout << "Enter your name: ";
        getline(cin, name);
    }

    cout << "good, your name is " << name;

    return 0;
}