#include <iostream>

void PrintMessage(const std::string &message = "", char separator = ',')
{
    std::cout << message << separator << std::endl;
}

int main()
{
    // Call with all arguments
    PrintMessage("Hello", '!');

    // Call with default separator
    PrintMessage("Welcome");

    // Call with no arguments (uses default message and separator)
    PrintMessage();

    return 0;
}
