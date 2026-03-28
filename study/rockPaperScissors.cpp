#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice()
{
    char player;
    do
    {
        cout << "Rock-Paper-Scissorrs Game!\n";
        cout << "**************************\n";
        cout << "Enter: \n";
        cout << "'r' for rock \n";
        cout << "'p' for paper \n";
        cout << "'s' for scissors \n";
        cout << "Choose: ";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    int num = (rand() % 3) + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    if (player == computer)
    {
        cout << "It's a tie\n"
             << endl;
    }
    else
    {
        switch (player)
        {
        case 'r':
            (computer == 'p') ? cout << "You lose\n" : cout << "You win\n";
            break;
        case 'p':
            (computer == 's') ? cout << "You lose\n" : cout << "You win\n";
            break;
        case 's':
            (computer == 'r') ? cout << "You lose\n" : cout << "You win\n";
            break;
        }
    }
    // cout << "Haiiii\n" << endl;
}

int main()
{
    srand(time(0));
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    // computer = 'r';
    cout << "Computer choice is: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}