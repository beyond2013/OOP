// Unsafe Array
// No Out of Bounds Warnings

#include <iostream>
using namespace std;
const int LIMIT=10;
int main(){
	int marks[LIMIT];
	int counter;

  marks[3]= 10;

	for(counter=0;counter <= LIMIT; counter++)
	{
		cout << marks[counter]<< endl;
	}
}


