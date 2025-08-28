# ATM Project (C++)

## Overview

This project is a simple **ATM simulation system** implemented in C++.
It was developed for educational purposes to practice **Object-Oriented Programming (OOP)** concepts such as **inheritance, polymorphism, encapsulation, and abstraction**.

The project models different types of bank accounts and provides common ATM operations like deposit, withdrawal, and monthly updates.

---

## Features

* Create different account types:

  * **Savings Account** (with interest rate).
  * **Checking Account** (with overdraft limit).
* Deposit and withdraw funds.
* Apply **monthly updates**:

  * Interest added to savings accounts.
  * Service fees applied to checking accounts.
* Print account statements.

---

## Project Structure

```
ATM_Project_CPP/
│
├── src/
│   ├── Account.cpp
│   ├── SavingsAccount.cpp
│   ├── CheckingAccount.cpp
│   ├── ATM.cpp
│   └── main.cpp
│
├── include/
│   ├── Account.h
│   ├── SavingsAccount.h
│   ├── CheckingAccount.h
│   └── ATM.h
│
├── .gitignore
└── README.md
```

---

## Learning Objectives

This project was built to strengthen understanding of:

* **Abstract classes** and **pure virtual functions**.
* **Method overriding** (polymorphism in action).
* **Encapsulation** of account details.
* Working with **dynamic memory** and destructors.
* Managing multiple objects using **STL containers** (`std::vector`).

---

## Notes

* The project is designed for **educational purposes** only.
* Code is kept simple and easy to read, focusing on **clarity over complexity**.
* Future extensions may include:

  * Transaction history.
  * User authentication.
  * Graphical or menu-based interface.
