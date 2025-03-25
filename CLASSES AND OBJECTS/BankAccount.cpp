#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string depositorName;
    int accountNumber; 
    string accountType;
    float balance;

public:
    void assignInitialValues(string name, int number, string type, float initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
 
    bool withdraw(float amount) { 
        if (amount > balance) 
        {
            cout << "Insufficient balance!" << endl;
            return false;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        return true;
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl << endl;
    }
};

int main() 
{
    BankAccount account;
    account.assignInitialValues("Shivam Jaiswal", 4545654, "Savings", 2000.0);
    account.display();
    account.deposit(1000.0);
    account.withdraw(500.0);
    account.display();
    account.withdraw(2000.0); 
    return 0;
}
