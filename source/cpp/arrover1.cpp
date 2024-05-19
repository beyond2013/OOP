// arrover1.cpp
// creates safe array (index values are checked before access)
// uses separate put and get functions
#include <iostream>
#include <cstdlib>
using namespace std;

const int LIMIT = 10;

class safearay
{
private:
	int arr[LIMIT];

public:
	void putel(int n, int elvalue)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nIndex out of bounds\n";
			exit(1);
		}
		arr[n] = elvalue;
	}

	int getel(int n) const
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nIndex out of bounds, there is no " << n << " location " << "\n ";
			exit(1);
		}
		return arr[n];
	}
};

int main()
{
	safearay sa1;
	int j;
	for (j = 0; j < LIMIT; j++)
		sa1.putel(j, j * 10);

	for (j = 0; j < LIMIT; j++) // display elements
	{
		int temp = sa1.getel(j);
		cout << "Element " << j << " is " << temp << endl;
	}
	cout << sa1.getel(15) << endl;
	return 0;
}
