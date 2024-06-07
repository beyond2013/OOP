# Abstract Classes and Interfaces

Abstract classes and interfaces are fundamental concepts in C++ for achieving abstraction and promoting code reusability. While C++ doesn't have a built-in interface concept like some other languages, abstract classes are often used to simulate interfaces. Here's a breakdown of each:

## Abstract Classes:

* An abstract class is a class that cannot be directly instantiated (you cannot create objects of that class).
* It serves as a blueprint for derived classes to inherit from.
* It can contain member variables and functions, including:
    * **Pure virtual functions:** These functions have no implementation in the abstract class and must be overridden by derived classes. They are declared with `virtual` keyword and an equal sign ( = 0 ).
    * **Normal member functions:** These functions provide default implementations that can be used by derived classes or overridden with specific behavior.

## Applications of Abstract Classes:

* **Defining common functionality:** An abstract class can specify common behavior for a group of related classes through pure virtual functions. Derived classes then implement these functions with their specific logic.
* **Enforcing a contract:** By inheriting from an abstract class, derived classes guarantee the implementation of certain functionalities (pure virtual functions). This promotes code consistency and maintainability.
* **Partial implementation:** An abstract class can provide some default implementations for member functions, which derived classes can use or override as needed.

## Interfaces (Simulated using Abstract Classes):

* An interface defines a set of functionalities that a class must implement.
* In C++, interfaces are typically achieved using abstract classes with only pure virtual functions.
* There are no member variables in an interface (abstract class simulating an interface).

## Applications of Interfaces (Simulated):

* **Decoupling code:** Interfaces promote loose coupling between components. They specify what functionalities are needed without dictating how they are implemented. This allows for greater flexibility and easier code maintenance.
* **Polymorphism:** Interfaces enable polymorphism through inheritance. Derived classes implementing the same interface can be treated interchangeably, allowing functions to work with various objects as long as they implement the interface.
* **Code reusability:** Interfaces promote code reusability by focusing on functionalities rather than implementation details. This allows you to create generic algorithms or functions that work with any class implementing the interface.

## Key Differences:

* **Member variables:** Abstract classes can have member variables, while interfaces (simulated) do not.
* **Multiple inheritance:** A class can only inherit from one abstract class, but it can implement multiple interfaces (simulated using abstract classes).

## Choosing Between Abstract Classes and Interfaces:

* If you need to share some common implementation along with the interface definition, use an abstract class.
* If you only need to define the functionalities without implementation details, use an interface (simulated with an abstract class with only pure virtual functions).

## Abstract Class Example: Shape with Area Calculation

```c++
#include <iostream>

using namespace std;

class Shape {
public:
  // Pure virtual function - must be overridden by derived classes
  virtual double getArea() const = 0;
};

class Rectangle : public Shape {
private:
  double width;
  double height;

public:
  Rectangle(double w, double h) : width(w), height(h) {}

  double getArea() const override {
    return width * height;
  }
};

class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) : radius(r) {}

  double getArea() const override {
    return 3.14159 * radius * radius;
  }
};

int main() {
  // You cannot create an object of the abstract class Shape
  // Shape shape; // This will cause an error

  Rectangle rectangle(5.0, 3.0);
  Circle circle(4.0);

  cout << "Rectangle area: " << rectangle.getArea() << endl;
  cout << "Circle area: " << circle.getArea() << endl;

  return 0;
}
```

## Explanation:

* We define an abstract class `Shape` with a pure virtual function `getArea`. Derived classes like `Rectangle` and `Circle` inherit from `Shape` and implement the `getArea` function with their specific area calculation logic.
* This enforces that any class inheriting from `Shape` must provide an implementation for calculating area.

