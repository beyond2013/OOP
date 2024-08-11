#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int f1_numerator, f1_denominator, f2_numerator, f2_denominator;
    char dummy; // dummy character to read the /

    int result_numerator, result_denominator;

    cout << "Enter first fraction e.g. 2/3\t";
    cin >> f1_numerator >> dummy >> f1_denominator;
    cout << "Enter second fraction \t";
    cin >> f2_numerator >> dummy >> f2_denominator;

    result_denominator = f1_denominator * f2_denominator;

    result_numerator = f1_numerator * f2_denominator + f2_numerator * f1_denominator;

    cout << f1_numerator << "/" << f1_denominator << " + " << f2_numerator << "/" << f2_denominator << " = ";
    cout << result_numerator << "/" << result_denominator;
    cout << endl;
    return 0;
}
