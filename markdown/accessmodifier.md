# Access Modifier

In object-oriented programming, `public`, `private`, and `protected` are called **access modifiers**. They are keywords that define the accessibility of a class's members (properties and methods) to other parts of the program.

* **Public:** Members declared as public can be accessed from anywhere in the program,  including outside the class itself. 

* **Private:** Members declared as private can only be accessed from within the class itself. This is useful for encapsulating data and ensuring it can only be modified through the class's methods. This is the default access level if no modifier is specified.

* **Protected:** Members declared as protected can be accessed from within the class and by classes that inherit from it. This allows for controlled inheritance and data sharing between parent and child classes.

These access modifiers help control how code interacts with a class and its data, promoting data integrity and modularity.

## Practice

Try to answer following questions:

1. In the following snippet of code which access modifier is used for:  
- data members
- member functions
2. Which access modifier has not been used in the following snippet
3. What will happen when the compiler reaches `cout<<dist.feet`
4. What is the correct method of obtaining the value of `feet` of `dist` object

```c++
class Distance
{
    private: 
      int feet;
      float inches;
    public:
      int getFeet()
      {
        return feet;
      }
      void setFeet(int newValue)
      {
         feet = newValue;
      }
};
int main()
{
    Distance dist;
    cout << dist.feet;
    return 0;
}
```