#include <iostream>

using namespace std;

int main() {
    // dynamic memory is memory that allocated while the program
    // or the compiler was running
    // dynamic memory make the programs more flexible

    char *pGrades = NULL;
    int size;

    cout << "Enter how many grades what you want to in: ";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}