#include <iostream>

using namespace std;

int main() {
    // outer loop, to repeat the inner loop n times
    // for (int i = 1; i <= 3; i++) {
    //     // cout << i << " ";
    //     // inner loop, to make loop 1 until 10
    //     for (int j = 1; j <= 10; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Practice make a rectangle using symbol?
    int rows; int columns; char symbol;

    cout << "Enter rows: "; 
    cin >> rows;

    cout << "Enter columns: "; 
    cin >> columns;
    
    cout << "Enter one symbol: "; 
    cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << symbol;
        }
        cout << endl;
    }    
    

    return 0;
}