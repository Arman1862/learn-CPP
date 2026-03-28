#include <iostream>

using namespace std;

int main() {
    // array, ahh finnaly

    // add [] after variable name, and add the value inside {}
    // but just one data type in cpp?
    
    // string cars[] = {"Ferrari", "Mclaren", "Mercedes"};
    
    // cout << cars;
    // output: 0x13ae9ffcb0 what the heck is this?
    // it's a memmory address where array locate it
    // to access the value in array must use a index like usuallly
    
    // insert the value later in array must be set the array size 
    string cars[3]; // [3] is a how much data in array 
    
    // insert manually
    cars[0] = "Ferrari";
    cars[1] = "Mclaren";
    cars[2] = "Mercedes";
    // audi is not displayed because the size for array just 3
    cars[3] = "Audi";

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    // edit a value an array
    cout << "Before is: " << cars[0] << endl;
    cars[0] = "Redbull";
    cout << "Now is: " << cars[0] << endl;
    

    return 0;
}