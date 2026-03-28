#include <iostream>

using namespace std;

int main()
{
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    // for loop is have another way more less syntaz and flexible
    // for (int i = 0; i < sizeof(students)/sizeof(string); i++) {
    //     cout << "Index " << i << " is " << students[i] << endl;
    // }

    // that's a for each
    for (string student : students) {
        cout << student << endl;
    }

    return 0;
}