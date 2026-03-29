#include <iostream>

using namespace std;

void sort(int numbers[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {10, 8, 9, 5, 2, 1, 3, 4, 6, 7};
    int size = sizeof(numbers)/sizeof(int);

    sort(numbers, size);

    // cout << numbers;
    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}