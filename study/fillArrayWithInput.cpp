#include <iostream>
#include <string>

using namespace std;

int main() {
    string foods[5];
    int size = sizeof(foods)/sizeof(string);
    string temp;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter a food you like or 'q' to quit, #" << i + 1 << ": ";
        getline(cin, temp);
        if (temp == "q") {
            break;
        } else {
            foods[i] += temp;
        }
    }

    cout << "You like following food: ";
    for (int i = 0; !foods[i].empty(); i++) {
        cout << foods[i] << " ";
    }

    return 0;
}