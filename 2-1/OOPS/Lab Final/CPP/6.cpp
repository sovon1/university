#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
      
    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main() {
    // Create a bank account
    //name , account number, account type, initial balance
    BankAccount account("John Doe", 12345, "Savings", 1000.0);
     
    // Display initial details
    cout << "Initial Account Details:" << endl;
    account.display();
    cout << endl;

    // Deposit money
    cout << "Depositing 500..." << endl;
    account.deposit(500);
    cout << endl;

    // Withdraw money
    cout << "Withdrawing 200..." << endl;
    account.withdraw(200);
    cout << endl;

    // Try to withdraw more than balance
    cout << "Trying to withdraw 2000..." << endl;
    account.withdraw(2000);
    cout << endl;

    // Display final details
    cout << "Final Account Details:" << endl;
    account.display();

    return 0;
}