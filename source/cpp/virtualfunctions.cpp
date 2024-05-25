#include <iostream>
using namespace std;
/*
   To understand the importance of virtual keyword
   in runtime polymorphism try to remove the virtual
   keyword at the beginning of void deposit(double amount)
   in the BankAccount class and run the code.

   Add it back to see how the code runs after adding it.
*/
class BankAccount
{
public:
    virtual void deposit(double amount)
    {
        // Base class implementation (common logic for all accounts)
        balance += amount;
        cout << "\ninside base class deposit" << endl;
    }

protected:
    double balance = 0.0;
};

class SavingAccount : public BankAccount
{
public:
    void deposit(double amount)
    {
        // Derived class implementation (specific to savings accounts)
        balance += amount + (amount * interestRate);
        cout << "\ninside derived SavingAccount class deposit" << endl;
    }

private:
    double interestRate = 0.01; // Example interest rate
};

class CheckingAccount : public BankAccount
{
public:
    void deposit(double amount)
    {
        // Derived class implementation (deduct fee)
        balance += amount - fee;
        cout << "\ninside derived CheckingAccount class deposit" << endl;
    }

private:
    double fee = 2.0; // Example fee
};

int main()
{
    BankAccount *genericPtr;    // Base class pointer
    SavingAccount mySavings;    // Create a SavingAccount object
    CheckingAccount myChecking; // Create a CheckingAccount object

    genericPtr = &mySavings;    // Points to SavingAccount
    genericPtr->deposit(100.0); // Calls BankAccount's deposit (incorrect)

    genericPtr = &myChecking;   // Points to CheckingAccount
    genericPtr->deposit(100.0); // Calls BankAccount's deposit (incorrect)
}
