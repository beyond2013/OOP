// arrover2.cpp
// creates safe array (index values are checked before access)
// uses one access() function for both put and get
#include <iostream>
#include <cstdlib>
using namespace std;
const int LIMIT = 10;

class safearay
{
private:
	int arr[LIMIT];

public:
	int &access(int n) // note: return by reference
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nIndex out of bounds\n";
			exit(1);
		}
		return arr[n];
	}
};

int main()
{
	safearay sa1;
	int j;
	for (j = 0; j < LIMIT; j++)		  // assign values to array using access function
		sa1.access(j) = (j + 1) * 10; // notice access used on left side

	for (j = 0; j < LIMIT; j++)
	{
		// int temp = sa1.access(j); // notice access used on right side
		// cout << "Element " << j << " is " << temp << endl;
		cout << "Element " << j << " is " << sa1.access(j) << endl;
	}
	return 0;
}
