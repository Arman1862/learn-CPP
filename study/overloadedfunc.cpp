#include <iostream>

using namespace std;

// Overload function is like overiding a function
// or make one function have multi functional

void bakePizza() {
    cout << "Here is your base pizza\n";
}

// overriding
void bakePizza(string pizza) {
    cout << "Here is your " << pizza <<  " pizza\n";
}

void bakePizza(int pizza) {
    cout << "Here is your " << pizza <<  " pizza\n";
}

int main() {
    
    // call base function
    bakePizza();

    // call overriding function(string)
    bakePizza("pepperoni");
 
    // call overrifing function(int)
    bakePizza(5);
    
    return 0;
}