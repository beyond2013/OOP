#include <iostream>
#include <string>
void PrintNumber(int num)
{
    std::cout << "Integer: " << num << std::endl;
}

void PrintNumber(double num)
{
    std::cout << "Double: " << num << std::endl;
}

void PrintNumber(const std::string &numb)
{

    std::cout << "String: " << numb << std::endl;
}

int main()
{
    PrintNumber(42);   // Calls the function with integer argument
    PrintNumber(3.14); // Calls the function with double argument
    std::string st = "Three";
    PrintNumber(st);
    // PrintNumber("3");
    return 0;
}
