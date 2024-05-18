#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	void setDist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}

	void getDist()
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
};

int main()
{
	Distance dist1, dist2;

	dist1.setDist(11, 6.25);
	dist2.getDist();

	cout << "\ndist1 = ";
	dist1.showDist();
	cout << "\ndist2 = ";
	dist2.showDist();
	cout << endl;

	return 0;
}
