#pragma once

#include <string>

class BankAccount
{
private:
    // ===============================
    // ✅ BUILD THIS WITH STUDENTS
    // ===============================

    std::string owner;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, double startingBalance);

    // Setters
    void setOwner(std::string name);

    // Getters
    std::string getOwner() const;
    double getBalance() const;

    // Account actions
    void deposit(double amount);
    void withdraw(double amount);

    // ===============================
    // 🔧 STUDENTS ADD THIS
    // ===============================
    void transfer(BankAccount &other, double amount);
};
