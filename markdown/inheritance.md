# Inheritance

- Inheritance is **a mechanism for creating new classes** (derived classes) that inherit:

  1.  properties and
  2.  behaviors from existing classes (base classes).

- It allows to:

  1. **reuse code** and
  2. **establish relationships between classes**.

Here's a breakdown of the key concepts:

* **Base Class (Parent Class, Superclass):** 
    - The original class that serves as the foundation for inheritance.
    - It defines the core attributes and methods that derived classes can inherit.
* **Derived Class (Child Class, Subclass):**
    - A new class created from a base class.
    - It inherits all the properties and methods of the base class, and can also add its own unique features.

## Core Principles of Inheritance:

* **Code Reusability:** 
  -  By inheriting properties and methods, **derived classes avoid duplicating code**. 

  - This saves: 

    1. development time 
    2. effort, and
    3. promotes code maintainability (changes in the base class propagate to derived classes).

* **Specialization:** 
    - Derived classes can add their own attributes and methods, specializing the base class for a more specific purpose.
    - This allows for creating classes with increasing levels of detail.

* **"Is-A" Relationship:**
     - Derived classes represent a more specific type of the base class.
     - For instance, a **CurrentAccount** class inherits from an **BankingAccount** class, because a **CurrentAccount** "is-a" type of **BankingAccount**.

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

* When there is a clear "is-a" relationship between classes.
* When there is a base class with common properties and methods that can be reused by derived classes.
* To avoid code duplication and promote code maintainability.

## Programming example
- [Account class](../source/cpp/AccountInheritance.cpp)

## Assignment Due 12 November 2024

Model a Person in a university, who can be a Student or a Teacher. The focus is on understanding inheritance and constructors without using virtual functions.

**Requirements:**

1. Define the Base Class **Person**:

- **Attributes:**
- name (protected, type std::string)
- age (protected, type int)
- Constructor to initialize name and age.
- A function DisplayInfo() that outputs the Person's name and age.

2. Define Derived Class **Student**:

- Inherits from Person.
- **Additional Attributes:**
- studentID (protected, type int)
- major (protected, type std::string)
- Constructor to initialize name, age, studentID, and major.
- A function DisplayStudentInfo() that calls DisplayInfo() from Person and also displays studentID and major.

3. Define Derived Class **Teacher**:

- Inherits from Person.
- **Additional Attributes:**
- teacherID (protected, type int)
- department (protected, type std::string)
- Constructor to initialize name, age, teacherID, and department.
- A function DisplayTeacherInfo() that calls DisplayInfo() from Person and also displays teacherID and department.

4. Implement Main Program:

- Create a few Student and Teacher objects.
- Call DisplayStudentInfo() for each Student and DisplayTeacherInfo() for each Teacher to print their details.

