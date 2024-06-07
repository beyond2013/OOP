# Polymorphism

Polymorphism in C++ refers to the concept of "having many forms." It allows objects of different classes to respond differently to the same function call or operator. This is achieved through two main mechanisms: function overloading and inheritance with virtual functions.

**1. Function Overloading (Compile-Time Polymorphism)**

Function overloading lets you define multiple functions with the same name but different parameter lists. The compiler determines which function to call based on the arguments you provide at runtime. This is considered compile-time polymorphism because the decision happens during compilation.

Here's an example:

```c++
#include <iostream>

using namespace std;

int sum(int a, int b) {
  return a + b;
}

double sum(double a, double b) {
  return a + b;
}

int main() {
  cout << sum(5, 3) << endl; // Calls sum(int, int)
  cout << sum(2.5, 1.7) << endl; // Calls sum(double, double)
  return 0;
}
```

In this example, we have two `sum` functions: one for integers and one for doubles. The compiler chooses the appropriate function based on the data types of the arguments passed during the call.

**2. Inheritance with Virtual Functions (Runtime Polymorphism)**

Inheritance allows you to create new classes (derived classes) that inherit properties and behaviors from a base class. Polymorphism comes into play when the base class has a virtual function. A virtual function is a function in the base class declared with the `virtual` keyword. Derived classes can override the virtual function to provide their own implementation.

Here's an example:

```c++
#include <iostream>

using namespace std;

class Shape {
public:
  virtual double getArea() = 0; // Pure virtual function (must be overridden)
};

class Rectangle : public Shape {
private:
  double width;
  double height;

public:
  Rectangle(double w, double h) : width(w), height(h) {}

  double getArea() override {
    return width * height;
  }
};

class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) : radius(r) {}

  double getArea() override {
    return 3.14159 * radius * radius;
  }
};

int main() {
  Shape* shapePtr; // Base class pointer

  Rectangle rectangle(5.0, 3.0);
  Circle circle(4.0);

  shapePtr = &rectangle; // Pointer can hold addresses of derived classes
  cout << "Rectangle area: " << shapePtr->getArea() << endl; // Calls Rectangle::getArea()

  shapePtr = &circle;
  cout << "Circle area: " << shapePtr->getArea() << endl; // Calls Circle::getArea()

  return 0;
}
```

In this example:

* We have a base class `Shape` with a pure virtual function `getArea`. This function must be overridden by derived classes to provide their specific area calculation logic.
* We have derived classes `Rectangle` and `Circle` that inherit from `Shape` and implement their own `getArea` methods.
* We use a `Shape` pointer (`shapePtr`) to hold objects of `Rectangle` and `Circle`.
* When we call `getArea` through the pointer, the actual function executed depends on the object's type at runtime. This demonstrates runtime polymorphism.

This revised example showcases polymorphism with a more practical scenario involving shapes and area calculations.