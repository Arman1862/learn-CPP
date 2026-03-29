#include <iostream>

using namespace std;

int searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};

    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    cout << "Enter element to search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);
    // cout << index << endl;
    if (index != -1) {
        cout << myNum << " is at index " << index << endl;
    } else {
        cout << myNum << " is not in array" << endl;
    }

    return 0;
}