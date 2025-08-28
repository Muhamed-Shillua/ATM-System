#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(string accNum, double bal, double limit)
    : Account(accNum, bal), overdraftLimit(limit) {
}

// Withdraw with overdraft check
bool CheckingAccount::withdraw(double amount) {
    if (balance + overdraftLimit >= amount) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        return true;
    }
    cout << "Overdraft limit exceeded!" << endl;
    return false;
}

// Apply monthly service fee
void CheckingAccount::monthlyUpdate() {
    balance -= 10; // Flat service fee
}

// Print account statement
void CheckingAccount::printStatement() const {
    cout << "[Checking] Account: " << accountNumber
        << ", Balance: " << balance
        << ", Overdraft Limit: " << overdraftLimit << endl;
}
