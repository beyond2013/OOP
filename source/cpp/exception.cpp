#include <iostream>
#include <stdexcept> // For standard exceptions

int main()
{
    int numerator;
    int denominator;

    std::cout << "Enter  value for numerator \t";
    std::cin >> numerator;
    std::cout << "Enter  value for denominator \t";
    std::cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw std::runtime_error("Division by zero error");
        }

        int result = numerator / denominator; // This will now never be reached if denominator is 0
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl; // Catch any other std::exception
    }
    /* catch (const std::runtime_error &e)
     {
         std::cerr << "Error: " << e.what() << std::endl; // Access error message
     }
     */

    std::cout << "Program continues... after the try catch block" << std::endl;
    return 0;
}
