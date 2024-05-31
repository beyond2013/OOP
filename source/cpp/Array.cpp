// Unsafe Array
// No Out of Bounds Warnings

#include <iostream>
using namespace std;
const int LIMIT = 10;
int main()
{
	const int marks[LIMIT] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

	// old way of iterating over array
	/*
	size_t counter;

	 for(counter=0;counter <= LIMIT; counter++)
	 {
		 cout << marks[counter]<< endl;
	 }
	 */

	cout << "Elements of array marks" << endl;
	for (int element : marks)
	{
		cout << element << endl;
	}
	return 0;
}
