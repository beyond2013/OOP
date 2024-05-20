#include <iostream>

using namespace std;

class Point
{
protected:
	int x, y;

public:
	Point() : x(0), y(0) {} // zero argument constructor

	// overloading constructors
	Point(int xval, int yval) : x(xval), y(yval) {} // 2 argument constructor

	Point(const Point &temp) : x(temp.x), y(temp.y) {} // copy constructor

	void setX(int xval)
	{
		x = xval;
	}

	void setY(int yval)
	{
		y = yval;
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}
	void showPoint()
	{
		cout << endl;
		cout << "x = " << x << " y = " << y << endl;
	}
};

int main()
{

	Point p1;
	Point p2 = Point(2, 4);
	Point p3(p2);
	cout << "p1.getX() = " << p1.getX();
	cout << "p1.getY() = " << p1.getY();
	cout << "p2 = ";
	p2.showPoint();
	cout << "p3 = ";
	p3.showPoint();
}
