#include "ATMApp.h"
#include <iostream>
#include <iomanip>
#include <limits>  // For clearing input buffer
using namespace std;

// ANSI color codes for console
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

// Helper function to print a line
void printLine(char ch = '=') {
    cout << string(60, ch) << endl;
}

void ATMApp::run() {
    int choice;
    string accNum;
    double amount, rate, limit, balance;

    while (true) {
        system("cls"); // Clear screen for neat menu display (Windows)
        printLine();
        cout << CYAN << setw(35) << "BANK ATM SYSTEM" << RESET << endl;
        printLine();

        // Display main menu
        cout << left;
        cout << setw(5) << "1." << "Create Savings Account\n";
        cout << setw(5) << "2." << "Create Checking Account\n";
        cout << setw(5) << "3." << "Deposit\n";
        cout << setw(5) << "4." << "Withdraw\n";
        cout << setw(5) << "5." << "Print Statement\n";
        cout << setw(5) << "6." << "Monthly Update All Accounts\n";
        cout << setw(5) << "0." << "Exit\n";
        printLine();

        // Input choice with validation
        cout << "Enter choice: ";
        while (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << RED << "Invalid input! Enter a number: " << RESET;
        }
        printLine('-');

        switch (choice) {
        case 1: // Create Savings Account
            cout << "Enter Account Number: "; cin >> accNum;
            cout << "Enter Initial Balance: "; cin >> balance;
            cout << "Enter Interest Rate (0.05 = 5%): "; cin >> rate;
            myATM.createSavings(accNum, balance, rate);
            cout << GREEN << "Savings Account Created Successfully!\n" << RESET;
            break;

        case 2: // Create Checking Account
            cout << "Enter Account Number: "; cin >> accNum;
            cout << "Enter Initial Balance: "; cin >> balance;
            cout << "Enter Overdraft Limit: "; cin >> limit;
            myATM.createChecking(accNum, balance, limit);
            cout << GREEN << "Checking Account Created Successfully!\n" << RESET;
            break;

        case 3: // Deposit
            cout << "Enter Account Number: "; cin >> accNum;
            cout << "Enter Amount to Deposit: "; cin >> amount;
            myATM.deposit(accNum, amount);
            cout << GREEN << "Deposit Completed!\n" << RESET;
            break;

        case 4: // Withdraw
            cout << "Enter Account Number: "; cin >> accNum;
            cout << "Enter Amount to Withdraw: "; cin >> amount;
            myATM.withdraw(accNum, amount);
            break;

        case 5: // Print Statement
            cout << "Enter Account Number: "; cin >> accNum;
            printLine('*');
            cout << YELLOW << "Account Statement" << RESET << endl;
            myATM.printStatement(accNum);
            printLine('*');
            break;

        case 6: // Monthly update all accounts
            cout << YELLOW << "Applying monthly updates to all accounts..." << RESET << endl;
            myATM.monthlyUpdateAll();
            cout << GREEN << "Monthly updates applied successfully!\n" << RESET;
            break;

        case 0: // Exit
            cout << CYAN << "Thank you for using the ATM. Goodbye!\n" << RESET;
            return;

        default: // Invalid choice
            cout << RED << "Invalid choice! Please try again.\n" << RESET;
        }

        // Pause before clearing screen
        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer
        cin.get(); // Wait for Enter
    }
}
