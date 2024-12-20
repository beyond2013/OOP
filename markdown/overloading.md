# Operator Overloading 

- Operator overloading is **a feature that allows you to redefine the behavior of existing operators (like +, -, *, /) for custom data types (like classes and structs)**.
- This means you can make these operators work with your objects in a way that makes sense for your program.

Here's a breakdown of the concept:

* **Standard Operators, New Meanings:** Operators like +, -, *, and / have built-in meanings for basic data types like integers and floats. Operator overloading lets you extend these operators to work with your own objects.
* **Example: String Concatenation (+):** Imagine a `String` class. By overloading the `+` operator, you can define how to combine two `String` objects using the familiar `+` syntax (e.g., `string1 + string2`). This makes your code more intuitive and readable.
* **More Than Math:** Overloading applies to various operators, not just arithmetic ones. You can overload comparison operators (==, !=) to compare objects, or stream insertion/extraction operators (<<, >>) for formatted output.

## Advantages of operator overloading

* **Intuitive Code:** By using familiar operators for your objects, your code becomes easier to read and understand. It feels more natural to write `point1 + point2` for adding points than a custom function call.
* **Improved Readability:** Code that leverages overloaded operators can be more concise. Instead of lengthy function calls, you can express operations in a more compact way, making your program cleaner.
* **Polymorphism in Action:** Operator overloading is a form of compile-time polymorphism. The compiler figures out which overloaded operator definition to use based on the operand types involved. This can lead to more flexible and reusable code.

Remember, while operator overloading is powerful, it's important to use it judiciously. Overloading too many operators or using them in an unconventional way can make code confusing. The goal is to enhance readability and maintainability, not introduce obscurity.

## Sample Programs

- [Overloading increment operator](../source/cpp/OperatorOverloading1.cpp)
- [Overloading increment operator so that it can be used in assignment statement](../source/cpp/OperatorOverloading2.cpp)
- [Nameless Temporary Objects](../source/cpp/OperatorOverloading3.cpp)
- [Overloading postfix increment Operator](../source/cpp/OperatorOverloading4.cpp)
- [Overloading binary operator +](../source/cpp/OperatorOverloadingbinary.cpp)
- [Overloading comparison operator < ](../source/cpp/ComparingDistances.cpp)
- [Arithmetic Assignment operator +=](../source/cpp/OverloadedAA.cpp)
- [Overloaded subscript operator []](../source/cpp/arrover3.cpp)

## Assignment Due 05 November 2024

Modify the [Point class](../source/cpp/Point.cpp) following instructions below:

1. Overload binary operator `+` and `-` 

   - Given point objects `P1(6, 8)`, `P2(3, 2)` `Sum(0,0)` and `Difference(0,0)`, the code should allow the syntax `Sum = P1 + P2;` and `Difference = P1 - P2`

2. Overload the comparison operator `>`

   - Given point objects `P1(6, 8)`, `P2(3, 2)`, the code should allow the syntax `if(P1 > P2){ cout << "Object P1 is greater than P2"};`
