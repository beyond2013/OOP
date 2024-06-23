# What are Exceptions?

- In C++, exceptions are :
  + Runtime errors or 
  + unexpected conditions that arise during program execution.
  + Examples include:
    * division by zero
    * attempting to access an out-of-bounds array element
    * or opening a file that doesn't exist

## Exception Handling Mechanism

- C++ provides a mechanism to handle these exceptions **gracefully**
  + preventing program crashes and
  + maintaining program flow.
- It involves three keywords:
  + **try:** Encloses the code block that might throw an exception.
  + **throw:** Signals the occurrence of an exception within the `try` block.
  + **catch:** Catches the thrown exception and provides a way to handle it.

## Steps:

1. **`try` Block:**
   - Place code that could potentially throw exceptions within the `try` block.
   - If no exception occurs during execution, the code continues normally, and the `catch` block is skipped.

2. **`throw` Statement:**
   - If an error condition arises within the `try` block, use the `throw` statement to signal the exception.
   - The `throw` statement can throw any exception, including objects derived from the `std::exception` class (the base class for most standard exceptions).

3. **`catch` Block:**
   - One or more `catch` blocks follow the `try` block.
   - Each `catch` block attempts to handle a specific type of exception.
   - The `catch` block's parameter is usually a reference to the exception object that was thrown. You can use this object to access information about the error.

## Basic Syntax

```cpp
try {
    // Code that may throw an exception
    throw exception; // This line will throw an exception
}
catch (ExceptionType1 e1) {
    // Code to handle ExceptionType1
}
catch (ExceptionType2 e2) {
    // Code to handle ExceptionType2
}
catch (...) {
    // Code to handle any type of exception
}
```
## Example:

```c++
#include <iostream>
#include <stdexcept> // For standard exceptions

int main()
{
    int numerator ;
    int denominator;

    std::cout<< "Enter  value for numerator \t";
    std::cin>>numerator;
    std::cout<< "Enter  value for denominator \t";
    std::cin>>denominator;

    try
    {
        if (denominator == 0)
        {
            throw std::runtime_error("Division by zero error");
        }

        int result = numerator / denominator; // This will now never be reached if denominator is 0
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl; // Access error message
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl; // Catch any other std::exception
    }

    std::cout << "Program continues... after the try catch block" << std::endl;
    return 0;
}
```

## Explanation

1. **Include Necessary Headers**: Ensure that `<stdexcept>` is included for using standard exceptions like `std::runtime_error`.
2. **Check for Division by Zero**: Before performing the division, check if the denominator is zero. If it is, throw a `std::runtime_error`.
3. **Catch Specific Exceptions**: Use `catch` blocks to handle specific exceptions. Here, `std::runtime_error` is caught separately from other `std::exception`s.

## Key Points:

- Exception handling adds overhead to your code. Use it judiciously for recoverable errors.
- Consider using custom exception classes for more specific error handling.
- Not all errors can be handled using exceptions (e.g., memory allocation failures).
- There are debates about the overuse of exceptions, so strive for a balance between robustness and code clarity.

Exception handling in C++ is a mechanism that allows the program to manage errors and other exceptional events in a structured and controlled manner. Here are the key concepts and syntax related to exception handling in C++:

## Best Practices

1. **Catch Exceptions by Reference**: Always catch exceptions by reference to avoid slicing and unnecessary copying.
   ```cpp
   catch (const std::runtime_error& e) { /*...*/ }
   ```

2. **Use Specific Exceptions**: Catch specific exceptions before more general ones to ensure that specific errors are handled appropriately.
   
3. **Re-throwing Exceptions**: You can re-throw an exception to let it propagate to an outer `try` block.
   ```cpp
   catch (const std::exception& e) {
       // Handle partially
       throw; // Re-throw the same exception
   }
   ```

4. **Exception Specifications**: C++11 onwards, the `noexcept` specifier is used instead of the old exception specifications.
   ```cpp
   void myFunction() noexcept {
       // This function is guaranteed not to throw any exceptions
   }
   ```

5. **Resource Management**: Use RAII (Resource Acquisition Is Initialization) to manage resources properly and ensure they are released even when exceptions occur.

By following these guidelines and understanding the basics, you can effectively handle exceptions in C++ and write robust and maintainable code.

# When creating a class where does exception handling code is mostly included?

When creating a class in C++, exception handling code is typically included in several key areas to ensure robustness and proper error handling. These areas include constructors, member functions, and sometimes destructors. Let's discuss each of these in detail:

## 1. Constructors

Constructors are critical because they initialize the object. If a constructor fails, it should throw an exception to indicate that the object could not be properly created. Exception handling in constructors ensures that resources are properly managed, and partially constructed objects are not left in an invalid state.

```cpp
#include <iostream>
#include <stdexcept>

class MyClass {
public:
    MyClass(int value) {
        if (value <= 0) {
            throw std::invalid_argument("Value must be positive");
        }
        this->value = value;
    }

private:
    int value;
};

int main() {
    try {
        MyClass obj(-1); // This will throw an exception
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught an exception in constructor: " << e.what() << std::endl;
    }
    return 0;
}
```

## 2. Member Functions

Member functions often include exception handling to deal with invalid inputs, resource management issues, or other runtime errors. This ensures that the class can handle unexpected situations gracefully.

```cpp
class MyClass {
public:
    void setValue(int value) {
        if (value <= 0) {
            throw std::invalid_argument("Value must be positive");
        }
        this->value = value;
    }

private:
    int value;
};

int main() {
    MyClass obj(10);
    try {
        obj.setValue(-5); // This will throw an exception
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught an exception in member function: " << e.what() << std::endl;
    }
    return 0;
}
```

## 3. Destructors

Destructors should generally avoid throwing exceptions because they are called during stack unwinding when another exception is already in progress, which can lead to `std::terminate` being called. However, destructors can use exception handling to catch exceptions and log errors or clean up resources safely.

```cpp
class MyClass {
public:
    ~MyClass() {
        try {
            // Cleanup code that might throw an exception
        } catch (...) {
            // Log the error, but do not rethrow
            std::cerr << "Exception caught in destructor" << std::endl;
        }
    }
};
```

## 4. Resource Management (RAII)

In classes managing resources such as dynamic memory, file handles, or network connections, exception handling is crucial to ensure resources are released properly. This is often done using the RAII (Resource Acquisition Is Initialization) idiom, where resources are acquired in the constructor and released in the destructor.

```cpp
#include <fstream>
#include <iostream>

class FileHandler {
public:
    FileHandler(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file");
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
        }
    }

private:
    std::fstream file;
};

int main() {
    try {
        FileHandler fh("nonexistentfile.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}
```

## Summary

- **Constructors**: Handle initialization errors.
- **Member Functions**: Handle runtime errors and invalid inputs.
- **Destructors**: Avoid throwing exceptions but catch and log if necessary.
- **Resource Management (RAII)**: Ensure resources are properly managed with exception safety.

By incorporating exception handling into these key areas, you ensure that your class is robust, resilient to errors, and maintains a consistent state even when exceptions occur.

## Assignment 
- Explore the abbreviation RAII
