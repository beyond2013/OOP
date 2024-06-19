#include <iostream>
using namespace std;

class Distance
{
public:
	Distance() : feet(6), inches(5) {}
	Distance(int f, float in) : feet(f), inches(in) {}
	void setDist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}

	void getDist() // Take input from user
	{
		cout << "\nEnter feet: ";
		cin >> feet;
		cout << "\nEnter inches: ";
		cin >> inches;
	}

	void showDist()
	{
		cout << feet << "\'-" << inches << '\"';
	}

private:
	int feet;
	float inches;
};

int main()
{
	Distance dist1, dist2, dist3;
	Distance dist4(3, 7.5);
	dist1.setDist(11, 6.5);
	dist2.getDist();

	cout << "\ndist1 = ";
	dist1.showDist();
	cout << "\ndist2 = ";
	dist2.showDist();
	cout << "\ndist3 = ";
	dist3.showDist();
	cout << "\ndist4 = ";
	dist4.showDist();
	cout << endl;

	return 0;
}
