# Inheritance

Inheritance in object-oriented programming (OOP) is a mechanism for creating new classes (derived classes) that inherit properties and behaviors from existing classes (base classes). It's like creating a blueprint based on an existing one, allowing you to reuse code and establish relationships between classes.

Here's a breakdown of the key concepts:

* **Base Class (Parent Class, Superclass):** The original class that serves as the foundation for inheritance. It defines the core attributes and methods that derived classes can inherit.
* **Derived Class (Child Class, Subclass):** A new class created from a base class. It inherits all the properties and methods of the base class, and can also add its own unique features.

## Core Principles of Inheritance:

* **Code Reusability:** By inheriting properties and methods, derived classes avoid duplicating code. This saves development time and effort, and promotes code maintainability (changes in the base class propagate to derived classes).
* **Specialization:** Derived classes can add their own attributes and methods, specializing the base class for a more specific purpose. This allows for creating classes with increasing levels of detail.
* **"Is-A" Relationship:** Derived classes represent a more specific type of the base class. For instance, a "Dog" class inherits from an "Animal" class, because a dog "is-a" type of animal.

## Benefits of Inheritance:

* Promotes code reusability and reduces redundancy.
* Creates a hierarchical organization of classes, reflecting real-world relationships.
* Makes code easier to understand and maintain.

## Real-World Examples of Inheritance:

* **E-commerce:**
    * Product (Base Class): name, price, stock
    * Book (Derived Class): author, ISBN (inherits from Product)
    * Clothing (Derived Class): size, color (inherits from Product)
    * Inheritance allows code reuse (product details) and specialization (book-specific attributes).
* **Banking System:**
    * Account (Base Class): balance, account holder
    * SavingsAccount (Derived Class): interest rate (inherits from Account)
    * CheckingAccount (Derived Class): overdraft limit (inherits from Account)
    * Inheritance helps model different account types with shared functionalities (balance management).
* **Game Development:**
    * Character (Base Class): name, health points
    * PlayerCharacter (Derived Class): inventory, experience points (inherits from Character)
    * Enemy (Derived Class): attack power (inherits from Character)
    * Inheritance helps create a hierarchy of characters with common attributes (health) and derived functionalities (player-specific inventory).

## Benefits of Inheritance in these Examples:

* **Code Reusability:** Base classes define common functionalities that derived classes inherit, reducing code duplication.
* **Maintainability:** Changes in the base class propagate to derived classes, making code easier to maintain.
* **Extensibility:** New derived classes can be created easily to represent new entities or variations, promoting code flexibility.

## When to Use Inheritance:

* When there's a clear "is-a" relationship between classes.
* When there's a base class with common properties and methods that can be reused by derived classes.
* To avoid code duplication and promote code maintainability.

# Programming example
- [Account class](../source/cpp/AccountInheritance.cpp)