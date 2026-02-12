#include "BankAccount.h"
#include <iostream>

// ===============================
// ✅ BUILD THIS WITH STUDENTS
// ===============================

// Constructor
BankAccount::BankAccount(std::string name, double startingBalance)
{
    owner = name;

    if (startingBalance >= 0)
        balance = startingBalance;
    else
        balance = 0;
}

// Setter
void BankAccount::setOwner(std::string name)
{
    owner = name;
}

// Getters
std::string BankAccount::getOwner() const
{
    return owner;
}

double BankAccount::getBalance() const
{
    return balance;
}

// Deposit
void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}

// Withdraw
void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

// ===============================
// 🔧 STUDENTS IMPLEMENT THIS
// ===============================

void BankAccount::transfer(BankAccount &other, double amount)
{
    // Make sure amount is valid
    if (amount <= 0)
        return;

    // Check if this account has enough funds
    if (amount <= balance)
    {
        // Use existing member functions
        withdraw(amount);
        other.deposit(amount);

        std::cout << "Transferred $" << amount
                  << " from " << owner
                  << " to " << other.getOwner()
                  << std::endl;
    }
}

