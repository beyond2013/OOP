#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string name;
    cout << "Enter your full name\t";
    getline(cin, name);
    cout << "Welcome! " << name << endl;

    return 0;
}