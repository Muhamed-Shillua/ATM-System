#include "SavingsAccount.h"
#include <iostream>
using namespace std;

/*---------------------------
Implementation of SavingsAccount class
---------------------------*/

// Constructor initializes account number, balance, and interest rate
SavingsAccount::SavingsAccount(string accNum, double bal, double rate)
    : Account(accNum, bal), interestRate(rate) {
}

// Apply monthly update: add interest to balance
void SavingsAccount::monthlyUpdate() {
    balance += balance * interestRate; 
}

// Print account statement, including interest rate
void SavingsAccount::printStatement() const {
    cout << "[Savings] Account: " << accountNumber
        << ", Balance: " << balance
        << ", Interest Rate: " << interestRate * 100 << "%" << endl;
}
