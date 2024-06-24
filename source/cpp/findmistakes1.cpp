#include <iostream>

using namespace std;

int main()
{
    char firstname[10];

    cout << "\n Enter your first name:\t";
    cin >> firstname;

    cout << firstname << " starts with the letter: " << firstname[0] << endl;

    return 0;
}