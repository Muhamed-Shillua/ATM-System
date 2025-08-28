#pragma once
#include "Account.h"

// Derived class for Checking Account
class CheckingAccount : public Account {
private:
    double overdraftLimit;

public:
    CheckingAccount(string accNum, double bal, double limit);

    // Withdraw with overdraft check
    bool withdraw(double amount) override;

    // Apply monthly updates (e.g., fees, interest if any)
    void monthlyUpdate() override;

    void printStatement() const override;
};
