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
		int& access(int n)			//note: return by reference
		{
			if( n< 0 || n>=LIMIT )
			{ cout << "\nIndex out of bounds\n"; exit(1); }
			return arr[n];
		}
};

int main()
{
	safearay sa1;
	int j;
	for(j=0; j<LIMIT; j++)
		sa1.access(j) = j*10;
	for(j=0; j<LIMIT; j++)
	{
		int temp = sa1.access(j);
		cout << "Element " << j << " is " << temp << endl;
	}
	return 0;
}
