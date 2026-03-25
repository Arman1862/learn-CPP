#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    int tries = 3;

    srand(time(0));
    num = (rand() % 10) + 1;

    do
    {
        cout << "You only have " << tries << " life" << endl;
        cout << "Enter number between 1-10: ";
        cin >> guess;

        if (guess > 10 || guess < 1)
        {
            cout << "Please enter between 1-10" << endl;
        }
        else if (guess > num)
        {
            cout << "is t0o big, make it lower" << endl;
            tries--;
        } else if (guess < num){
            cout << "is to0 low, make it bigger" << endl;
            tries--;
        }
    } while (guess != num && tries > 0);

    guess == num ? cout << "Your guess is correct: " << num
                : cout << "Game Over" << num;
    return 0;
}