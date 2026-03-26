#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double amount;

void showBalance(double balance)
{
    cout << "Your balance is: " << setprecision(2) << fixed << balance << endl;
}

double deposit()
{
    cout << "How many you want to deposit: ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    cout << "That's not valid\n";
    return 0;
}

double withdrawn(double balance)
{
    showBalance(balance);
    cout << "How many to withdraw: ";
    cin >> amount;
    if (amount < balance || balance != 0)
    {
        return amount;
    }

    cout << "Lolll\n";
    return 0;
}

int main()
{
    int choice;
    double balance = 0;

    do
    {
        cout << "*******************\n";
        cout << "Banking Program\n";
        cout << "*******************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money \n";
        cout << "3. Withdraw Money \n";
        cout << "4. Exit \n";
        cout << "Choose: ";
        cin >> choice;
        
        // to check input error or not
        if (cin.fail())
        {                            // Cek jika input gagal (misal input huruf ke variabel int)
            cin.clear();             // Reset error flag
            // to reset status cin
            cin.ignore(10000, '\n'); // Buang sampai 10.000 karakter atau ketemu baris baru
            // to clear error value in buffer
        }

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdrawn(balance);
            showBalance(balance);
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    cout << "Thanks for using";

    return 0;
}