#include <iostream>
#include <string>
#include"20260831_Problem.h"
using namespace std;

std::string accountHolder; // 口座名義人
    double balance;            // 残高

    BankAccount::BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) 
    {

    }
    
    double BankAccount::getBalance() const 
    {
        return balance;
    }

    void BankAccount::deposit(double amount) 
    {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else {
            cout << "Invalid deposit amount.\n";
        }
    }

        void BankAccount::withdraw(double amount) {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

        void BankAccount::displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"
            << "Current Balance: " << balance << "\n";
    }