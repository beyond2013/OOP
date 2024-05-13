#include <iostream.h>
#include "Distance.h"
using namespace std;

int main()
{
    Distance dist1;  // define dist1
    dist1.getdist(); // get dist1 from user
    cout << "\ndist1 = ";
    dist1.showdist();
    Distance dist2(11, 6.25); // define, initialize dist2
    cout << "\ndist2 = ";
    dist2.showdist();
    dist1 += dist2;
    cout << "\nAfter addition,"; // dist1 = dist1 + dist2
    cout << "\ndist1 = ";
    dist1.showdist();
    cout << endl;
    return 0;
}