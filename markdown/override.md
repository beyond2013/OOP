# Function overriding

Function overriding is a powerful mechanism in object-oriented C++ that allows derived classes to redefine inherited functions from base classes.

## Understanding Function Overriding

* **Core Concept:** In inheritance, when a derived class inherits a function from its base class, it has the capability to provide its own implementation for that function. This redefinition is called function overriding.
* **Key Points:**
    * The function in the derived class has the same name and signature (return type and parameter list) as the function in the base class.
    * The overriding function provides specialized behavior specific to the derived class.
* **Benefits:**
    * Enables polymorphism, a core principle of object-oriented programming that allows for flexible and dynamic function calls.
    * Promotes code reusability by inheriting common functionality from the base class while customizing behavior in derived classes.

**Example: Overriding `deposit` Function in Banking Accounts**

Let's illustrate function overriding with a banking account scenario:

```c++
class BankAccount {
public:
  virtual void deposit(double amount) {
    // Base class implementation (common logic for all accounts)
    balance += amount;
  }

protected:
  double balance = 0.0;
};

class SavingAccount : public BankAccount {
public:
  void deposit(double amount) override {
    // Derived class implementation (specific to savings accounts)
    balance += amount + (amount * interestRate);
  }

private:
  double interestRate = 0.01; // Example interest rate
};

int main() {
  SavingAccount mySavings;
  mySavings.deposit(100.0); // Calls SavingAccount's deposit with interest

  BankAccount genericAccount; // Base class object
  genericAccount.deposit(100.0); // Calls BankAccount's deposit (no interest)
}
```

## Explanation:

1. The `BankAccount` class serves as the base class with a `deposit` function that performs the common task of adding the amount to the balance. It's declared as `virtual` to allow overriding in derived classes.
2. The `SavingAccount` class inherits from `BankAccount`. It overrides the `deposit` function, providing its own implementation that adds the interest rate to the deposited amount.

## Key Points to Remember:

* The function call in the `main` function depends on the object's type at runtime (runtime polymorphism). When you call `deposit` on a `SavingAccount` object, the overridden version with interest calculation is executed.
* Overriding enables you to create a hierarchy of classes with specialized functionalities while maintaining a common foundation in the base class.