#include <iostream>

using namespace std;

class Point
{
public:
	Point() : x(0), y(0) {} // zero argument constructor

	// overloading constructors
	Point(int xval, int yval) : x(xval), y(yval) {} // 2 argument constructor

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

private:
	int x, y;
};
