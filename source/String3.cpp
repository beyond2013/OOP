#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int MAX=20;
	char str[MAX];
	cout<<"\n Enter a string\t:";
	cin.get(str, MAX, '$');
	cout << "\n You entered " << str <<endl;
	return 0;
}

