#include <iostream>

void PrintNumber(int num)
{
    std::cout << "Integer: " << num << std::endl;
}

void PrintNumber(double num)
{
    std::cout << "Double: " << num << std::endl;
}

int main()
{
    PrintNumber(42);   // Calls the function with integer argument
    PrintNumber(3.14); // Calls the function with double argument
    return 0;
}
