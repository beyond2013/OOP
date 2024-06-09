#include <iostream>

using namespace std;

class Shape
{

public:
    Shape() : area(0.0) {}
    virtual double getArea() = 0; // Pure virtual function (must be overridden)
    virtual void showArea()
    {
        cout << "Area = " << area << endl;
    }

protected:
    double area;
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea()
    {
        area = width * height;
        return area;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea()
    {
        area = 3.14159 * radius * radius;
        return area;
    }
};

int main()
{
    // Shape obj;
    Shape *shapePtr; // Base class pointer

    Rectangle rectangle(5.0, 3.0);
    Circle circle(4.0);

    cout << "Area of Rectangle: ";
    rectangle.showArea();
    cout << "Area of Circle: ";
    circle.showArea();
    shapePtr = &rectangle;                                     // Pointer can hold addresses of derived classes
    cout << "Rectangle area: " << shapePtr->getArea() << endl; // Calls Rectangle::getArea()

    shapePtr = &circle;
    cout << "Circle area: " << shapePtr->getArea() << endl; // Calls Circle::getArea()

    cout << "Area of Rectangle: ";
    rectangle.showArea();
    cout << "Area of Circle: ";
    circle.showArea();
    return 0;
}