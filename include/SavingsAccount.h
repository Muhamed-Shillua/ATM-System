#pragma once
#include "Account.h"

// Derived class for Savings Account
class SavingsAccount : public Account {
private:
    double interestRate; 

public:
    SavingsAccount(string accNum, double bal, double rate);

    void monthlyUpdate() override;

    void printStatement() const override;
};
