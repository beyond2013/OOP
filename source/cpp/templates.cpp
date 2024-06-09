#include <iostream>

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
T subtract(T a, T b)
{
    return a - b;
}

int main()
{
    int x = 5, y = 3;
    double d1 = 2.5, d2 = 1.7;

    std::cout << add(x, y) << std::endl;        // Calls add(int, int)
    std::cout << add(d1, d2) << std::endl;      // Calls add(double, double)
    std::cout << subtract(x, y) << std::endl;   // Calls add(int, int)
    std::cout << subtract(d1, d2) << std::endl; // Calls add(double, double)
}