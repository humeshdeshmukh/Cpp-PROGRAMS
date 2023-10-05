#include <iostream>
using namespace std;
class BankAccount

{
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount. Please enter a positive amount." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance for withdrawal." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount. Please enter a positive amount." << endl;
        }
    }

    // Function to display the account details
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    int accNum;
    double initialBalance;

    cout << "Enter account number: ";
    cin >> accNum;

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    BankAccount account(accNum, initialBalance);

    account.display();

    double depositAmount, withdrawAmount;

    cout << "Enter amount to deposit: $";
    cin >> depositAmount;

    account.deposit(depositAmount);

    cout << "Enter amount to withdraw: $";
    cin >> withdrawAmount;

    account.withdraw(withdrawAmount);

    account.display();

    return 0;
}
