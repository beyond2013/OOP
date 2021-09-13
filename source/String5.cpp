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
	// size()
	cout << "size of str1: \t" << str1.size()<<endl;
	cout << "size of str2: \t" << str2.size()<<endl;
	cout << "size of str3: \t" << str3.size()<<endl;
	// append()
	string str4 = "MCS";
  cout << "\n str4 before append : " << str4;
	str4.append(" 2nd Semester");
  cout << "\n str4 after append : " << str4 << endl;
  //erase()
	str4.erase(0,3);
  cout << "\n str4 after erase(0,2) : " << str4 << endl;

	//replace
	
  str4.replace(0,5, "ABCS");
  cout << "\n str4 after replace(0,5,\"ABCS\") : " << str4 << endl;

	// easier example
  string str5="university of balochistan, Quetta, balochistan";
  cout << "\n str5 before replace : " << str5 << endl;
  str5.replace(0,1,"U");
  cout << "\n str5 after replace(0,1,\"U\") : " << str5 << endl;

  // find example
	cout << endl<< "b found at location : " << str5.find("b") <<endl;

//  cout << "\n str5 after replace(14,1,\"B\") : " << str5.replace(14,1,"B") << endl;

  cout << "\n str5 after replace(str5.find(\"b\"),1,\"B\") : "
		<< str5.replace(str5.find("b"),1,"B") << endl;
 cout<<"============================================================================="<<endl;
	string str6="Terminal";
	cout<<str6.append("Exam")<<endl;
	cout<<str6.size()<<endl;
	cout<<str6.find("E")<<endl;
	cout<<str6.replace(0,3,"tER")<<endl;
	cout<<str6.erase(8,11)<<endl;
	return 0;
}

