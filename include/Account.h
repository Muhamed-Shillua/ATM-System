#pragma once
#include <string>
using namespace std;

// Base class for all account types
class Account {
protected:
    string accountNumber;
    double balance;      

public:
    Account(string accNum, double bal);

    virtual ~Account();

    // Getters
    string getAccountNumber() const; 
    double getBalance() const;       

    virtual void deposit(double amount);

    virtual bool withdraw(double amount);

    virtual void monthlyUpdate() = 0;

    virtual void printStatement() const;
};
