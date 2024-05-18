# Class

Following section provide a step by step break down of the syntax of a class with the help of an example. In this example, `Distance` has two private member variables: `feet` (an integer) and `inches` (a float). It also has two public member functions: `setFeet` (to set the `feet`) and `getFeet` (to retrieve the `Feet`).

## 1. Class Declaration:

```c++
class Distance {
// ... class definition goes here ...
};
```

This line declares a class named `Distance`. The curly braces `{}` mark the beginning and end of the class definition, where you'll specify the class members (data and functions).

## 2. Member Variables (Data):

```c++
class Distance {
private:
  int feet;  // Member variable to store an integer
  float inches;  // Member variable to store a floating value

public:
  // ... member functions go here ...
};
```

- **`private`:** This keyword defines member variables that are only accessible within the class itself. These variables encapsulate the data and protect it from being modified directly from outside the class.
- **`public`:** This keyword defines member variables that can be accessed from outside the class using the object's name and the dot operator (`.`).

## 3. Member Functions (Behavior):

```c++
class Distance {
private:
  int feet;
  float inches;

public:
  void setFeet(int newValue) {  // Function to set the value
    feet = newValue;
  }

  int getFeet(){  // Function to get the feet
    return feet;
  }
};
```

- Member functions define the behavior (actions) of the class. They can access and manipulate the member variables.
- Similar to member variables, member functions can be declared as `private` (accessible only within the class) or `public` (accessible from outside the class).


## 4. Practice: 

- Add 2 member functions to the definition of the class
- create `setInches()` to set the value of `inches`
- create `getInches()` to get the value of `inches`
- add following lines on the top of class definition

```c++
#include<iostream>
using namespace std;
```
- save your file as `Distance.cpp`