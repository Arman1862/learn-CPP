#include <iostream>

using namespace std;

int main() {
    // fill(), fills a range of elements with a specified value
    // (start, stop, value)

    // classic method manually
    // string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    // const int SIZE = 10;
    const int SIZE = 9;

    string foods[SIZE];

    // fill(foods, foods + SIZE, "pizza");

    // if want half pizza and half hamburger
    // fill(foods, foods + (SIZE/2), "pizza");
    // fill(foods + (SIZE/2), foods + SIZE, "hamburger");
    
    // if want divide by three
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "taco");

    for (string food : foods) {
        cout << food << endl;
    }

    return 0;
}