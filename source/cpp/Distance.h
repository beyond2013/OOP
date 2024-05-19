#include <iostream>
#include <typeinfo>
using namespace std;
class Distance
{

public:
    // Distance() = default;                                // 0 argument default constructor
    Distance() : feet(0), inches(0.0) {}
    Distance(int f, float inc) : feet(f), inches(inc) {} // 2 argument constructor

    void setdist(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    void getdist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }

    void showdist()
    {
        cout << feet << "\'-" << inches << '\"' << endl;
    }

    bool operator<(Distance) const;
    void operator+=(Distance);

private:
    int feet;
    float inches;
};
bool Distance::operator<(Distance d2) const // return the sum
{
    /*
    float bf1 = feet + inches / 12;
    float bf2 = d2.feet + d2.inches / 12;
    */

    float bf1 = feet * 12 + inches;
    float bf2 = d2.feet * 12 + d2.inches;

    return (bf1 < bf2) ? true : false; // ternary operator
}

void Distance::operator+=(Distance d2)
{
    feet += d2.feet;     // add the feet
    inches += d2.inches; // add the inches

    if (inches >= 12.0) // if total exceeds 12.0,
    {                   // then decrease inches
        inches -= 12.0; // by 12.0 and
        feet++;         // increase feet  by 1
    }
}