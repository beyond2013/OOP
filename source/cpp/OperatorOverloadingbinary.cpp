#include <iostream>
using namespace std;
class Distance
// English Distance class
{
public:
    // constructor (no args)
    Distance() : feet(0), inches(0.0)
    {
    }
    // constructor (two args)
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getdist()
    // get length from user
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showdist()
    // display distance
    {
        cout << feet << "\'-" << inches << '\"';
    }
    Distance operator+(Distance); // add 2 distances

private:
    int feet;
    float inches;
};

Distance Distance::operator+(Distance d2) // return sum
{
    int f = feet + d2.feet;
    // add the feet
    float i = inches + d2.inches; // add the inches
    if (i >= 12.0)                // if total exceeds 12.0,
    {
        i -= 12.0; // then decrease inches by 12.0 and
        f++;       // increase feet by 1
    }
    // return a temporary Distance
    return Distance(f, i); // initialized to sum of the two objects
}
int main()
{
    Distance dist1, dist3, dist4;  // define distances
    dist1.getdist();               // get dist1 from user
    Distance dist2(11, 9.0);       // define, initialize dist2
    dist3 = dist1 + dist2;         // single '+' operator
    dist4 = dist1 + dist2 + dist3; // multiple ‘+’ operators
    cout << "dist1 = ";
    dist1.showdist();
    cout << endl;
    cout << "dist2 = ";
    dist2.showdist();
    cout << endl;
    cout << "dist3 : dist1 + dist2 = ";
    dist3.showdist();
    cout << endl;
    cout << "dist4 : dist1 + dist2 + dist3 = ";
    dist4.showdist();
    cout << endl;

    return 0;
}
