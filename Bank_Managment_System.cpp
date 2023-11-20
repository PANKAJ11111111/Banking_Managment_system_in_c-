#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int account_number;
    string account_type;
    double balance;

public:
    BankAccount(string name, int account_number, string account_type, double balance) {
        this->name = name;
        this->account_number = account_number;
        this->account_type = account_type;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;

    }
};


int main() {
    // Creating an instance of BankAccount
    BankAccount account("pankaj", 123456789, "Savings", 1000.0);

    // Depositing an amount
    account.deposit(500.0);

    // Withdrawing an amount
    bool withdrawalStatus = account.withdraw(200.0);
    if (withdrawalStatus) {
        cout << "Withdrawal successful." << endl;
    } else {
        cout << "Insufficient balance for withdrawal." << endl;
    }

    // Displaying account details
    account.display();

    return 0;
}