#pragma once
#include <vector>
#include "Account.h"
using namespace std;

// ATM class manages multiple accounts
class ATM {
private:
    vector<Account*> accounts; // Stores all accounts

    // Helper: find account by account number
    Account* findAccount(string accNum);

public:
    // Destructor: clean up dynamically allocated accounts
    ~ATM();

    // Create accounts
    void createSavings(string accNum, double balance, double rate);
    void createChecking(string accNum, double balance, double limit);

    // Account operations
    void deposit(string accNum, double amount);
    void withdraw(string accNum, double amount);
    void printStatement(string accNum);

    // Apply monthly updates to all accounts
    void monthlyUpdateAll();
};
