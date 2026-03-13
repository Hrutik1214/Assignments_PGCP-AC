#include<iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 1000, amount;

    do
    {
        cout << "\n---- BANK MENU ----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Money Deposited Successfully\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= balance)
                {
                    balance = balance - amount;
                    cout << "Please collect your money\n";
                }
                else
                {
                    cout << "Insufficient Balance\n";
                }
                break;

            case 4:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}