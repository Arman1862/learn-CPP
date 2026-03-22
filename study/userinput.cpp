#include <iostream>
#include <string> // to use getline
using namespace std;

// to get user input we can use
// cin >> <saved_place/var> to store

int main() {
    string name;
    string fullname;
    int age;

    // cout << "What's your name: ";
    // cin >> name; >> is extraction operator
    // fyi << is insertion operator
    // but we have a problem if we input with whitespace in input like a full name
    // What's your name: Arman Rafardhan
    // What's your age: Hello Arman
    // You're 0 years old

    // so we can use getline function std::getline(parent, our var)
    cout << "What's your full name: ";
    getline(cin >> ws, fullname);
    // we must use >> ws to prevent '\n' in buffer(if have)

    cout << "What's your age: ";
    cin >> age;

    cout << "Hello " << fullname << endl;
    cout << "You're " << age << " years old";
}