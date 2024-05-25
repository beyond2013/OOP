# Virtual functions
In object-oriented programming (OOP), specifically C++, virtual functions are a mechanism that allows derived classes to redefine functions inherited from their base class. This concept is crucial for achieving polymorphism, a core principle of OOP.

Here's a breakdown of virtual functions:

## What they are:

* Member functions declared with the `virtual` keyword within a base class.
* Intended to be overridden by derived classes to provide specialized behavior.

## Key points:

* **Signature match:** The overridden function in the derived class must have the same name and parameter list (signature) as the virtual function in the base class.
* **Runtime binding:** When you call a virtual function through a base class pointer or reference, the decision of which function to execute (base class or overridden version) is made at runtime based on the actual object's type. This is the essence of polymorphism.

## Benefits:

* **Polymorphism:** Enables treating objects of different derived classes uniformly through the base class interface, allowing for flexible function calls.
* **Code reusability:** Base class provides common functionality, while derived classes customize behavior through overriding.
* **Maintainability:** Makes code more extensible and easier to modify as new derived classes can be introduced without affecting the base class.


## Why `virtual` is Important in the Base Class:

* **Polymorphism:** The primary purpose of `virtual` is to enable polymorphism, a core tenet of object-oriented programming. Polymorphism allows you to treat objects of different derived classes (like `SavingAccount`) uniformly through a base class pointer or reference. When you call a virtual function through a base class pointer, the correct overridden version from the actual object type (derived class) is executed at runtime.

Without `virtual`, if you call `deposit` on a base class pointer pointing to a derived class object, the base class's `deposit` function would always be called, regardless of the object's type. This defeats the purpose of overriding and achieving specialized behavior in derived classes.

## Example: Issues Without `virtual`
[link to the source file](../source/cpp/virtualfunctions.cpp)
```c++
class BankAccount
{
public:
    void deposit(double amount)
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
```
In this case, calling `deposit` through the base class pointer (`genericPtr`) would always execute the `BankAccount`'s `deposit` function, even for derived class objects. This would lead to incorrect behavior:

* `SavingAccount` wouldn't receive the interest.
* `CheckingAccount` wouldn't deduct the fee.

## Best Practices:

* It's generally considered good practice to declare virtual any function in the base class that you intend to be overridden in derived classes. This ensures proper polymorphism and runtime behavior.
* Even if your current example seems to work without `virtual`, it might lead to problems as your codebase grows and incorporates more derived classes.

## In Conclusion:

While removing `virtual` might not cause issues in a limited example, it's strongly recommended to keep it in the base class for these reasons:

* Enables polymorphism, a fundamental concept of object-oriented programming.
* Ensures correct function calls based on object types at runtime.
* Promotes maintainability and prevents potential bugs in more complex inheritance hierarchies.