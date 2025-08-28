#include "ATM.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>
using namespace std;

// Destructor: free all dynamically allocated accounts
ATM::~ATM() {
    for (auto acc : accounts) delete acc;
}

// Find account by account number; return nullptr if not found
Account* ATM::findAccount(string accNum) {
    for (auto acc : accounts) {
        if (acc->getAccountNumber() == accNum)
            return acc;
    }
    cout << "Account not found!" << endl;
    return nullptr;
}

// Create a new savings account
void ATM::createSavings(string accNum, double balance, double rate) {
    accounts.push_back(new SavingsAccount(accNum, balance, rate));
}

// Create a new checking account
void ATM::createChecking(string accNum, double balance, double limit) {
    accounts.push_back(new CheckingAccount(accNum, balance, limit));
}

// Deposit to specified account
void ATM::deposit(string accNum, double amount) {
    if (auto acc = findAccount(accNum)) acc->deposit(amount);
}

// Withdraw from specified account
void ATM::withdraw(string accNum, double amount) {
    if (auto acc = findAccount(accNum)) acc->withdraw(amount);
}

// Print account statement
void ATM::printStatement(string accNum) {
    if (auto acc = findAccount(accNum)) acc->printStatement();
}

// Apply monthly updates to all accounts
void ATM::monthlyUpdateAll() {
    for (auto acc : accounts) acc->monthlyUpdate();
}
