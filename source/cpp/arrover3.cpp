// arrover3.cpp
// creates safe array (index values are checked before access)
// uses overloaded [] operator for both put and get
#include <iostream>
#include <cstdlib>
using namespace std;
const int LIMIT = 10;
class safearay
{
private:
	int arr[LIMIT];

public:
	int &operator[](int n) // note: return by reference
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
	for (j = 0; j < LIMIT; j++)
		sa1[j] = (j + 1) * 11;

	for (j = 0; j < LIMIT; j++)
	{
		int temp = sa1[j];
		cout << "Element " << j << " is " << temp << endl;
	}
	return 0;
}
