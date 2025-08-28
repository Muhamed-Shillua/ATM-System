#include "Account.h"
#include <iostream>
using namespace std;

/*---------------------------
 Implementation of Account class
 --------------------------- */

Account::Account(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

Account::~Account() {}

string Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}

// Deposit funds into the account
void Account::deposit(double amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl; 
}

// Withdraw funds; checks if sufficient balance exists
bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl; 
        return true;
    }
    cout << "Insufficient funds!" << endl; 
    return false;
}

// Print basic account statement; can be overridden in derived classes
void Account::printStatement() const {
    cout << "Account Number: " << accountNumber
        << ", Balance: " << balance << endl;
}
