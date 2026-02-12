#include <iostream>
#include "BankAccount.h"

int main()
{
    // Instantiate multiple objects
    BankAccount account1("Alice", 500);
    BankAccount account2("Bob", 300);

    account1.deposit(200);
    account1.withdraw(100);

    std::cout << account1.getOwner()
              << " balance: $"
              << account1.getBalance() << std::endl;

    std::cout << account2.getOwner()
              << " balance: $"
              << account2.getBalance() << std::endl;

    // ===============================
    // 🔧 STUDENTS TEST TRANSFER HERE
    // ===============================

    account1.transfer(account2, 150);

    return 0;
}
