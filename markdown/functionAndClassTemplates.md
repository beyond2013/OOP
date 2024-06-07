# Function and Class Templates

In C++, function templates and class templates are powerful tools for writing generic code that can work with various data types. They allow you to create a single function or class definition that can be adapted to different types without needing to write repetitive code.

## Function Templates:

* A function template defines a blueprint for a function that can work with different data types.
* It uses placeholders, typically denoted by `<typename T>`, to represent the data type that will be used when the template is instantiated (used) with a specific type.
* Here's the basic syntax:

```c++
template <typename T>
T functionName(T parameter1, T parameter2, ...) {
  // Function implementation using the type T
}
```

## Example:

```c++
#include <iostream>

template <typename T>
T add(T a, T b) {
  return a + b;
}

int main() {
  int x = 5, y = 3;
  double d1 = 2.5, d2 = 1.7;

  std::cout << add(x, y) << std::endl; // Calls add(int, int)
  std::cout << add(d1, d2) << std::endl; // Calls add(double, double)
}
```

In this example, the `add` function template can be used for both integers and doubles. The compiler automatically generates separate versions of the function for each data type used during function calls.

## Class Templates:

* A class template defines a blueprint for a class that can work with different data types.
* Similar to function templates, it uses placeholders like `<typename T>` to represent the data type used with the class.
* Here's the basic syntax:

```c++
template <typename T>
class MyClass {
private:
  T memberVariable;

public:
  // Member functions using the type T
};
```

## Example:

```c++
#include <iostream>

template <typename T>
class Array {
private:
  T data[10]; // Array of size 10 (can be adjusted)
  int size;

public:
  Array(int s) : size(s) {}

  void setElement(int index, T value) {
    data[index] = value;
  }

  T getElement(int index) {
    return data[index];
  }

  void printArray() {
    for (int i = 0; i < size; i++) {
      std::cout << data[i] << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  Array<int> intArray(5);
  Array<double> doubleArray(7);

  for (int i = 0; i < intArray.size; i++) {
    intArray.setElement(i, i * 2);
  }

  for (int i = 0; i < doubleArray.size; i++) {
    doubleArray.setElement(i, i * 1.5);
  }

  intArray.printArray();
  doubleArray.printArray();
}
```

This example shows a generic `Array` class template that can hold integers, doubles, or any other data type. The size of the array can also be adjusted based on your needs.

## Benefits of Templates:

* **Reduced Code Duplication:** You write the code once and use it for various data types, improving code maintainability.
* **Improved Readability:** Templates can make your code more concise and easier to understand by avoiding repetitive code for different data types.
* **Type Safety:** The compiler ensures type safety by checking the data types used with templates during instantiation.

## Things to Consider with Templates:

* **Increased Compilation Time:** Templates can slightly increase compilation time because the compiler needs to generate code for each specific data type used.
* **Complexity:** Complex template code can be harder to understand and debug. It's important to maintain clear and well-documented templates.

Overall, function and class templates are powerful tools for writing generic and reusable code in C++. They can significantly improve your code's efficiency and maintainability.