#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 10; i+=2) {
        if (i == 6) {
            // break = stop the loop
            // break;

            // continue = skip value at the statement
            continue;
        }
        cout << i << endl;
    }
    return 0;
}