# const and non const Functions 

In C++, `const` plays a crucial role in object-oriented programming (OOP) by defining the mutability (ability to change) of objects and their member functions. Here's a breakdown of `const` functions and how they relate to OOP principles:

## Const Functions:

- A function declared with `const` at the end of its parameter list is a **const member function**.
- **Purpose:** These functions guarantee that they **won't modify** the object's state (its member variables) during execution.
- **Benefits:**
    - **Safer Object Interaction:** Ensures the object's data integrity by preventing accidental modifications.
    - **Wider Applicability:** Const member functions can be called on both **const** and **non-const** objects because they don't alter the object's state.
    - **Clear Intent:** Signals to the programmer that the function's primary purpose is to access or manipulate data without modification.

## Example:

```c++
class Account {
private:
    int balance;
public:
    Account(int initialBalance) : balance(initialBalance) {}

    // Const member function (guarantees no modification)
    int getBalance() const {
        return balance;
    }

    // Non-const member function (can modify)
    void deposit(int amount) {
        balance += amount;
    }
};
```

In this example, `getBalance` is a `const` function because it only retrieves the balance without changing it. `deposit` is a non-const function because it modifies the balance.

## Non-Const Functions:

- Functions without `const` at the end are **non-const member functions**.
- **Purpose:** These functions can modify the object's state during execution.
- **Use Cases:** Used for operations that update or manipulate the object's data, such as depositing funds into an account or changing an object's color.

## Relationship to OOP:

- **Encapsulation:** Const functions support encapsulation by allowing controlled access to object data without compromising its integrity.
- **Data Hiding:** By restricting modification within const functions, the internal implementation details of the object are hidden, promoting modularity and maintainability.

## Choosing Between Const and Non-Const:

- If a function only needs to access data without modification, make it `const`. This enhances code safety and reusability.
- If a function needs to update the object's state, make it non-const.

## Additional Considerations:

- **Return Type:** A `const` function can return any data type, including `const` types to indicate the returned data shouldn't be modified.
- **Const Pointers and References:** Const correctness can extend to pointers and references within the function arguments and return type.

By understanding `const` functions, you can write more robust, secure, and maintainable object-oriented code in C++.

## Practice:

- Add a function `bool can_withdraw(double amount)` to the `Account` class
- Amount less than or equal to balance can be withdrawn
- Decide whether `can_withdraw` should be `const` or non const