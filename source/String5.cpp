#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = string("C++");
	string str2 = "Object Oriented";
	string str3;
//	str3 = str1 + str2;
	str3 = str1 + " " + str2;
	cout <<endl<< str3<<endl;
	cout << "size of str1: \t" << str1.size()<<endl;
	cout << "size of str2: \t" << str2.size()<<endl;
	cout << "size of str3: \t" << str3.size()<<endl;
	return 0;
}

