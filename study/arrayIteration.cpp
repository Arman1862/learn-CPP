#include <iostream>

using namespace std;

int main() {
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    // itteration an array
    for (int i = 0; i < sizeof(students)/sizeof(string); i++) {
        cout << "Index " << i << " is " << students[i] << endl;
    }

    return 0;
}