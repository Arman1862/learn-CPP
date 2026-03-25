#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int random = (rand() % 5) + 1;

    switch (random) {
        case 1:
            cout << "You got 1 luzer\n";
            break;
        case 2:
            cout << "You got 2 haha\n";
            break;
        case 3:
            cout << "You got 3 cool\n";
            break;
        case 4:
            cout << "You got 4 awesome\n";
            break;
        case 5:
            cout << "You got 5 amazing\n";
            break;
    }

    return 0;
}