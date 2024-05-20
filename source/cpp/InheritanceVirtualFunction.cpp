#include <iostream>
#include <string>

class Account
{
public:
    std::string name;
    double balance;

    Account(const std::string &name, double balance) : name(name), balance(balance) {}

    virtual void Deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposit successful for " << name << std::endl;
        }
        else
        {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    virtual void Withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrawal successful for " << name << std::endl;
        }
        else
        {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }

    void PrintBalance()
    {
        std::cout << name << "'s account balance: $" << balance << std::endl;
    }
};

class SavingsAccount : public Account
{
public:
    double interestRate;

    SavingsAccount(const std::string &name, double balance, double interestRate) : Account(name, balance), interestRate(interestRate) {}

    // Override Deposit to include potential interest earned
    void Deposit(double amount) override
    {
        Account::Deposit(amount); // Call base class Deposit for common logic
        double interest = amount * interestRate;
        balance += interest;
        std::cout << "Interest earned: $" << interest << std::endl;
    }
};

int main()
{
    Account checkingAccount("John Doe", 1000);
    SavingsAccount savingsAccount("Jane Smith", 500, 0.02); // 2% interest

    checkingAccount.Deposit(500);
    checkingAccount.PrintBalance(); // Output: John Doe's account balance: $1500

    savingsAccount.Deposit(200);
    savingsAccount.PrintBalance(); // Output: Jane Smith's account balance: $704 (includes interest)

    savingsAccount.Withdraw(300);
    savingsAccount.PrintBalance(); // Output: Jane Smith's account balance: $404

    return 0;
}
