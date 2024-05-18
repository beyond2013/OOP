# Destructor

A **destructor** is another special member function in object-oriented programming, similar to a constructor but for the opposite purpose. It's called automatically when an object is no longer needed and is about to be destroyed. 

Here's why destructors are important:

* **Resource management:**  They allow you to properly deallocate memory that was allocated for the object during its lifetime. This prevents memory leaks, where unused memory keeps being occupied by the program.
* **Cleanup tasks:** Destructors can be used to perform other cleanup tasks specific to the object, such as closing files, releasing database connections, or freeing up any external resources it was using.
* **Ensuring data integrity:** In some cases, destructors can be used to perform actions like saving object state or notifying other parts of the program before the object is destroyed.

Even though some programming languages might provide a default destructor, it's generally good practice to define your own destructor whenever your class manages resources or needs specific cleanup actions. This ensures proper memory management and avoids potential issues in your program.

```c++
class Distance {
 private:
  int feet;
  float inches;

 public:
  // Constructor to initialize the distance object
  Distance(int ft, float in) {
    feet = ft;
    inches = in;
  }

  // Destructor to print a message when the object is destroyed
  ~Distance() {
    std::cout << "Distance object destroyed: " << feet << "ft " << inches << "in\n";
  }
};
```
In this example:
  - The destructor `~Distance()` is a special member function named with a tilde (~) followed by the class name.
  - It doesn't take any arguments and doesn't return a value.
  - Inside the destructor, we simply print a message indicating that the object is being destroyed and its current feet and inches values.

Note:
- This is a simple example to illustrate the concept of a destructor.  
- In a real-world scenario, you might not necessarily use a destructor to just print a message.  
- It's typically used for resource management tasks specific to your class.  

## Practice

- Write main method and create an object of Distance class.
- When do you see the message in the destructor in the output.
