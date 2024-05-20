#include <iostream>

using std::cout;
using std::endl;

int power(int base = 3, int exp = 2)
{
    int answer = 1;
    for (int i = 0; i < exp; i++)
    {
        answer = answer * base;
    }
    return answer;
}

int power(float base = 2.0, int exp = 3)
{
    int answer = 1;
    for (int i = 0; i < exp; i++)
    {
        answer = answer * base;
    }
    return answer;
}

/*void PrintMessage(const std::string &message = "", char separator = ',')
{
    cout << message << separator << endl;
}
*/

int main()
{
    /*
    // Call with all arguments
    PrintMessage("Hello", '!');

    // Call with default separator
    PrintMessage("Welcome");

    // Call with no arguments (uses default message and separator)
    PrintMessage();
    */
    cout << power() << endl;
    cout << power(2) << endl;
    cout << power(2, 3) << endl;
    cout << power(4) << endl;
    return 0;
}
