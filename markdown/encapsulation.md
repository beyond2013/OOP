# Data Encapsulation

In object-oriented programming (OOP), data encapsulation is a fundamental principle that combines data (attributes) and the methods (functions) that operate on that data into a single unit called a class. This bundling serves two key purposes:

1. **Data Protection:** It restricts direct access to the data members of an object, preventing them from being modified accidentally or maliciously by external code.
2. **Information Hiding:** It hides the internal implementation details of the class, allowing you to control how the data is accessed and manipulated. This promotes modularity and maintainability of code.

## How Encapsulation Works in C++

C++ implements encapsulation using access modifiers:

- **Private:** Members declared as `private` are only accessible within the class itself. These are the core data members you want to protect.
- **Public:** Members declared as `public` are accessible from anywhere in the program. These are typically methods that provide controlled access to private data members.
- **Protected:** Members declared as `protected` are accessible within the class and its derived classes (inheritance).

## Example:

```c++
class Account {
private:
    double balance; // Private data member

public:
    // Public constructor to initialize balance
    Account(double initialBalance) : balance(initialBalance) {}

    // Public method to deposit funds (controlled access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            // Handle invalid deposit attempt (e.g., throw an exception)
        }
    }

    // Public method to get the balance (read-only access)
    double getBalance() const {
        return balance;
    }
};
```

## Explanation:

1. The `Account` class encapsulates the `balance` data member (private) and two methods: `deposit` and `getBalance`.
2. The `balance` member is protected from direct modification outside the class.
3. The `deposit` method allows controlled addition of funds while handling invalid input.
4. The `getBalance` method provides a read-only view of the balance.

## Benefits of Data Encapsulation

- **Data Integrity:** Data is less prone to accidental or intentional corruption.
- **Modular Design:** Code becomes more modular, easier to understand, and maintain.
- **Improved Maintainability:** Changes to internal implementation details are less likely to break external code.
- **Reusability:** Classes can be reused more effectively without worrying about unintended consequences on their data.

By following these principles, you can create more robust, secure, and maintainable object-oriented programs in C++.

## Understanding Encapsulation: Practice Questions

To understand the topic well try to answer following questions.

**1. Access and Modification:**

- Why is the `balance` member declared as `private` in the `Account` class?
- Can you directly modify the `balance` of an `Account` object from outside the class (e.g., in the `main` function)? How or why not?
- How would you deposit funds into an `Account` object if direct modification of `balance` is not allowed?

**2. Information Hiding:**

- What information is hidden by making `balance` private? How does this promote modularity?
- Can you access the current balance of an `Account` object directly? If not, how can you retrieve it without compromising data integrity? 

**3. Benefits and Trade-offs:**

- What are the advantages of using encapsulation in this `Account` class example? 
- Are there any potential drawbacks to using encapsulation in this scenario?

**4. Alternative Access Levels:**

- How would the behavior of the class change if `deposit` and `getBalance` were declared as `private` instead of `public`?
- When might using `protected` access specifiers be appropriate for class members?

**5. Real-World Application:**

- Can you think of a real-world example where encapsulation would be a valuable concept to use? How would it benefit the design of the system?
