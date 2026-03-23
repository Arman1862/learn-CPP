#include <iostream>

using namespace std;

// switch case is alternate for if else statement
// for example is a grade or a month

int main()
{
    char grade;
    cout << "Enter grade (A-E): ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "You're doing so good" << endl;
        break;
    case 'B':
        cout << "You're good" << endl;
        break;
    case 'C':
        cout << "You're Calon engineer" << endl;
        break;
    case 'D':
        cout << "You're a Doktor engineer" << endl;
        break;
    case 'E':
        cout << "You're the real Engineer" << endl;
        break;
    default:
        cout << "plis just enter A-E" << endl;
    }
}