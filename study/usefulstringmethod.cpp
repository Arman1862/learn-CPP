#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    // why not use cin >> ws
    // because empty enter = whitespace

    // name.length() .length() is used to get information the length of that valuse
    // like length in other programming language
    // if (name.length() > 12) {
    //     cout << "Your name can't be over 12 character";
    // } else {
    //     cout << "Welcome " << name;
    // }

    // name.empty() .empty() is used to check the value empty or not
    // like the name
    
    // if (name.empty()) {
    //     cout << "Your name is empty, you didn't not enter your name";
    // } else {
    //     cout << "Hello " << name; 
    // }
    
    // .clear() is used to remove the value from the element
    // name.clear();
    // cout << "Hello " << name; 
    
    // .append() is used to add value at the element
    // name.append(" Rafardhan");
    // cout << "Hello " << name; 

    // .at() is used to get character by index from the value at the element
    // cout << name.at(0);

    //  .insert() is used to add value(like append) but we can choose
    // where to add the value by adding index
    // cout << name.insert(name.length(), "@gmail.com");

    // .find() is like .at() but get index by value at the element
    // cout << name.find("a");

    // .erase() is like .clear() but we can control where we want to delete
    // start, end
    cout << name.erase(0, 5);

    return 0;
}