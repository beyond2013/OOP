# Objects as Instances:

In our example, the class `Distance` acts like a blueprint. It defines the structure (data members and member functions) for creating objects. An object is an instance of a class, meaning it's a specific realization of that class with its own set of data values.

Imagine `Distance` as a template for creating different user profiles. The class definition specifies the kind of information a distance can hold (e.g. 5'-6", Five feet six inches). When you create an object, you provide the specific values for those data members.

## Creating Multiple Objects:

```c++
Distance object1;  // Create an object named object1
object1.setFeet(2);
object1.setInches(4.5);

Distance object2;  // Create another object named object2
object2.setFeet(7);
object2.setInches(6.3);

// Now object1 and object2 hold different data
```

In this code, we create two separate objects, `object1` and `object2`, both instances of `Distance`. We can set different values for `feet` and `inches` using the member functions for each object independently. This allows you to manage distinct data for each instance of the class.

## Key Points:

- Objects hold specific data based on the class definition.
- Multiple objects of the same class can exist, each with its own data.
- Objects provide a way to model real-world entities with their properties and behaviors.

By understanding objects, you can effectively utilize classes to create reusable and modular components in your C++ programs.

## Practice

- Place the code of section [Creating multiple Objects](#creating-multiple-objects) inside `main()`
- Now append the `main()` function to the end of the `Distance` class created in the previous section.
- Save, Compile, and Execute the code to see what it does