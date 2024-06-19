#include <iostream>
#include <stdexcept> // For standard exceptions

int main()
{
    int numerator = 10;
    int denominator = 0;

    try
    {
        if (denominator == 0)
        {
            throw std::runtime_error("Division by zero error");
        }

        int result = numerator / denominator; // This will now never be reached if denominator is 0
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl; // Access error message
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl; // Catch any other std::exception
    }

    std::cout << "Program continues... after the try catch block" << std::endl;
    return 0;
}
