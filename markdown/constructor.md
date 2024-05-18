# Constructor

In object-oriented programming, a **constructor** is a special type of method that is automatically called whenever you create an object of a class. It acts like a blueprint to set up a new object's initial state.

Here's why constructors are important:

* **Initialization:** They ensure that objects are created in a valid and consistent state. You can assign initial values to the object's member variables, like setting a default name or starting position.

* **Customization:** Constructors can take arguments, allowing you to create objects with different properties right from the start. Imagine creating a `Car` object, and in the constructor you provide the color and model as arguments.

* **Control:** Constructors prevent objects from being created in unexpected ways. By controlling the initialization process, you can avoid objects with missing or invalid data.

Overall, constructors are essential for creating well-defined and flexible objects in object-oriented programming.

- The first public member function in the following code snippet with the same name as that of the class is constructor.
- It takes no argument, and is called no argument or zero argument constructor. 
- It is possible to write a constructor in many ways

```c++
class Distance
{
    private: 
      int feet;
      float inches;
    public:
      Distance() = default;  // new syntax
      // Distance(): feet(0), inches(0.0){}   //older way
    /* Distance()            // older more similar to java in syntax
     {
        feet = 0; 
        inches = 0.0;
     } */  
     // Distance(int f, float in): feet(f), inches(in){}  //2 argument constructor
      int getFeet()
      {
        return feet;
      }
      void setFeet(int newValue)
      {
         feet = newValue;
      }
};
```
## How many constructors in a class?

A class can have **as many constructors as you want**, within reason. There's typically no practical limit imposed by most programming languages themselves.

This ability to have multiple constructors is called **constructor overloading**. It means creating constructors with different parameter lists (number and types of arguments). This allows you to:

* **Provide flexibility:**  Create objects with varying amounts of initial data.
* **Handle different scenarios:**  Have constructors for specific use cases. 

However, it's important to consider these points:

* **Readability:**  Too many constructors can make your class complex and hard to understand.
* **Maintainability:**  Adding more constructors requires keeping track of their functionalities.

While there's no set limit, strive to create a manageable number of constructors that provide the necessary initialization options for your class. 

# Practice

- Write the `main` function and create an object of Distance class
- How do you know that the constructor is automatically called?
- Comment the new syntax and un comment one of the older syntax 
- Try different initial values for `feet` and `inches` in the constructor
- In the `main` function try to write the line `Distance d2(4, 3.2)` 
- What happends if the values are flipped `Distance d2(3.2, 4)`