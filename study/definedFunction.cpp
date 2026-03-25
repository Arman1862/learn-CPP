#include <iostream>

using namespace std;

// The compiler is read the program for the top to down

// void is to declare a function
void happyBirthday(string name, int old); // same like in bottom

int main() {
    // function is reusable code, yap like other language

    string name = "Arman";
    int age = 18;

    happyBirthday(name, age); // name is argument for happyBirthday 
    return 0;
}

// if we put the function here but not declare in top main will be error
// parameter and argument also apply(berlaku)

void happyBirthday(string name, int old) { // string name is a parameter, it's declare again the variable?
    // you can rename the parameter name(age to old or whatever)
    cout << "Happy birthday to " << name << endl;
    cout << "Happy birthday to " << name << endl;
    cout << "Happy birthday dear " << name << endl;
    cout << "Your are " << old << endl;
}
