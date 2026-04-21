#include <iostream>

using namespace std;
template <typename T> // for the template


// int max(int x, int y) { // is just only integer tyoe
//     return (x > y) ? x : y;
// }

// T is just name for the template
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    // tunction that receive any data types

    cout << myMax(2, 4);

    return 0;
}