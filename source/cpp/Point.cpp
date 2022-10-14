#include<iostream>

using namespace std;

class Point{
	protected:
	int x, y;

	public:
	Point(): x(0), y(0){}

	Point(int xval, int yval): x(xval), y(yval){}

	void setX(int xval){
		x = xval;
	}

	void setY(int yval){
		y=yval;
	}

	int getX(){
		return x;
	}

	int getY(){
		return y;
	}
};

int main(){

	Point p1;
	Point p2= Point(2,4);

	cout<<"p1.getX() = " << p1.getX();
	cout<<"p1.getX() = " << p1.getX();
	cout<<"p2 = " << p2;
}

