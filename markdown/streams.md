# Object streams

- Object streams in C++ are used to perform input and output operations on objects of user-defined types.
- This involves serialization (writing an object's state to a stream) and deserialization (reading an object's state from a stream).
- The C++ standard library provides facilities for these operations using `ostream` for output and `istream` for input.

## Basic Concept

- To enable an object to be written to or read from a stream, you need to overload: 
  + **the insertion operator (`<<`) for output**  
  + **the extraction operator (`>>`) for input**

## Example Code

Here's a simple example that demonstrates how to create a class, overload the stream operators, and use object streams for serialization and deserialization.

### Step 1: Define a Class

First, define a class with some data members.

```cpp
#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person() : name(""), age(0) {}  // Default constructor
    Person(const std::string& name, int age) : name(name), age(age) {}  // Parameterized constructor
};
```

### Step 2: Overload the Stream Operators

Overload the `<<` operator for output (serialization) and the `>>` operator for input (deserialization).

```cpp
// Overload the insertion (<<) operator
std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << person.name << " " << person.age;
    return os;
}

// Overload the extraction (>>) operator
std::istream& operator>>(std::istream& is, Person& person) {
    is >> person.name >> person.age;
    return is;
}
```

### Step 3: Use the Stream Operators

Now you can use the overloaded operators to write to and read from streams.

```cpp
int main() {
    // Create a Person object
    Person p1("John Doe", 30);

    // Serialize the object to a file
    std::ofstream outFile("person.txt");
    if (outFile.is_open()) {
        outFile << p1;
        outFile.close();
    }

    // Deserialize the object from the file
    Person p2;
    std::ifstream inFile("person.txt");
    if (inFile.is_open()) {
        inFile >> p2;
        inFile.close();
    }

    // Display the deserialized object
    std::cout << "Deserialized Person: " << p2 << std::endl;

    return 0;
}
```

### Explanation

1. **Class Definition**: The `Person` class has two members: `name` and `age`.
2. **Operator Overloading**:
    - The `<<` operator is overloaded to write the `name` and `age` of a `Person` object to an `ostream`.
    - The `>>` operator is overloaded to read the `name` and `age` from an `istream` into a `Person` object.
3. **Serialization**:
    - In the `main` function, a `Person` object `p1` is created and written to a file `person.txt` using the overloaded `<<` operator.
4. **Deserialization**:
    - Another `Person` object `p2` is created and its state is read from the file `person.txt` using the overloaded `>>` operator.
5. **Display**:
    - The deserialized `Person` object `p2` is displayed to verify that the data was correctly read from the file.

This example demonstrates how to use object streams in C++ for simple serialization and deserialization of objects. For more complex objects, you might need to handle additional aspects such as pointers, dynamic memory, and custom data formats.