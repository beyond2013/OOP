#include <iostream>
#include "Distance.h"
using namespace std;
int main()
{
    Distance dist1;  // define Distance dist1
    dist1.getdist(); // get dist1 from user
    Distance dist2(6, 2.5);
    cout << "\n dist1= ";
    dist1.showdist();
    cout << "\n dist2= ";
    dist2.showdist();
    if (dist1 < dist2) // overloaded ‘<’ operator
        cout << "\n dist1 is less than dist2";
    else
        cout << "\n dist1 is greater than(or equal to) dist2";
    cout << endl;
    return 0;
}
