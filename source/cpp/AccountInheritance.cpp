#include <iostream>
#include <string>

class Account
{
protected:
    std::string name;
    double balance;

public:
    Account(const std::string &name, double balance) : name(name), balance(balance) {}

    void Deposit(double amount)
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

    void Withdraw(double amount)
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
{ // Inherits from Account
public:
    double interestRate;

    SavingsAccount(const std::string &name, double balance, double interestRate) : Account(name, balance)
    {
        // Initialize interestRate in the constructor
        this->interestRate = interestRate;
    }
    // over ride Deposit
    void Deposit(double amount)
    {
        if (amount > 100)
        {
            balance += amount;
            balance += (amount * interestRate);
            std::cout << "Deposit successful for " << name << std::endl;
        }
        else
        {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }
};

int main()
{
    Account checkingAccount("John Doe", 1000.50);
    SavingsAccount savingsAccount("Jane Smith", 500.80, 0.02); // 2% interest (stored in SavingsAccount)

    checkingAccount.Deposit(500.90);
    checkingAccount.PrintBalance(); // Output: John Doe's account balance: $1500

    savingsAccount.Deposit(200.75); // Uses inherited Deposit function
    savingsAccount.PrintBalance();  // Output: Jane Smith's account balance: $700

    savingsAccount.Withdraw(300.60); // Uses inherited Withdraw function
    savingsAccount.PrintBalance();   // Output: Jane Smith's account balance: $400

    return 0;
}
