#include <iostream>

using namespace std;

int main()
{
    // first [] is for rows, and the second [] is for columns
    string couples[][3] = {
        {"Arman", "Blora", "Man"},
        {"Annida", "Jakarta", "Woman"}
    };

    int rows = sizeof(couples)/sizeof(couples[0]);
    int columns = sizeof(couples[0])/sizeof(couples[0][0]);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << couples[i][j] << " ";
        }
        cout << endl;
    }

    // cout << couples[0][0] << " ";
    // cout << couples[0][1] << " ";
    // cout << couples[0][2] << endl;
    // cout << couples[1][0] << " ";
    // cout << couples[1][1] << " ";
    // cout << couples[1][2] << " ";

    return 0;
}