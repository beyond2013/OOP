#include <iostream>

using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction add_fractions(Fraction, Fraction);
Fraction sub_fractions(Fraction, Fraction);
Fraction multiply_fractions(Fraction, Fraction);
Fraction divide_fractions(Fraction, Fraction);
void display_result(Fraction);

int gcd(int, int);
void simplify_fraction(Fraction &);

int main()
{
    Fraction f1, f2, result;
    char dummy; // dummy character to read the '/' in fraction 1/2

    cout << "Enter first fraction e.g. 2/3\t";
    cin >> f1.numerator >> dummy >> f1.denominator;
    cout << "Enter second fraction \t";
    cin >> f2.numerator >> dummy >> f2.denominator;

    cout << "Adding fractions results in \t";
    result = add_fractions(f1, f2);
    display_result(result);
    cout << endl;

    cout << "Subtracting fractions results in \t";
    result = sub_fractions(f1, f2);
    display_result(result);
    cout << endl;

    cout << "Multiplying fractions results in \t";
    result = multiply_fractions(f1, f2);
    display_result(result);
    cout << endl;

    cout << "Dividing fractions results in \t";
    result = divide_fractions(f1, f2);
    display_result(result);
    cout << endl;

    return 0;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    simplify_fraction(result);
    return result;
}

Fraction sub_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    simplify_fraction(result);
    return result;
}

Fraction multiply_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.denominator = f1.denominator * f2.denominator;
    result.numerator = f1.numerator * f2.numerator;
    simplify_fraction(result);
    return result;
}

Fraction divide_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    simplify_fraction(result);
    return result;
}

void display_result(Fraction f)
{
    cout << f.numerator << "/" << f.denominator;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify_fraction(Fraction &f)
{
    int divisor = gcd(f.numerator, f.denominator);
    f.numerator /= divisor;
    f.denominator /= divisor;
}
