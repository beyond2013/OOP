# Introduction to Object Oriented Programming

## 1. **Introduction to Classes and Objects**
   - Explain the basic concept of a class as a blueprint for creating objects.
   - Illustrate how a class defines both data (attributes) and functions (methods) that operate on the data.

## 2. **Define a Simple Class in C++**
   - Create a `Fraction` class to demonstrate:
     - **Private Data Members**: `numerator` and `denominator`.
     - **Public Member Functions**: Functions to set and get values for these data members.

```{.cpp .numberLines}
   class Fraction {

   public:
       void setValues(int num, int denom) {
           numerator = num;
           denominator = denom;
       }

       void print() {
           cout << numerator << "/" << denominator << endl;
       }

   private:
       int numerator;
       int denominator;
   };
```

## 3. **Discuss Access Specifiers:**
   - Explain the difference between `private` and `public`:
     - **Private**: Members cannot be accessed directly outside the class.
     - **Public**: Members can be accessed from outside the class.
   - Emphasize the importance of encapsulation and data protection.

## 4. **Introduction to Constructors**
   - Explain what a constructor is and its purpose (initializing objects).
   - Show how to define a default constructor and a parameterized constructor:

```{.cpp .numberLines}
   Fraction() {
       numerator = 0;
       denominator = 1;
   }

   Fraction(int num, int denom) {
       numerator = num;
       denominator = denom;
   }
```

## 5. **Demonstrate Object Creation and Usage**
   - Create objects of the `Fraction` class using both the default and parameterized constructors:
```{.cpp .numberLines}
   Fraction f1;               // Default constructor
   Fraction f2(3, 4);         // Parameterized constructor
   f1.setValues(1, 2);        
   f1.print();                // Output: 1/2
   f2.print();                // Output: 3/4
```
   - Illustrate how objects can use class methods to manipulate and display data.

## 6. **function to add 2 fractions**

```{.cpp .numberLines}
class Fraction {
    // constructors and
    //public member functions

    // Member function to add two fractions
    Fraction add(const Fraction& other) {
        Fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

// private members
};
```
