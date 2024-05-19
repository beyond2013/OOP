#include <iostream>
#include "Distance.h"
using namespace std;

class DistanceArray
{
private:
    enum
    {
        MAX = 5
    };
    Distance arr[MAX];

public:
    // DistanceArray() = default; // 0 argument constructor

    Distance &operator[](int n) // note: return by reference
    {
        if (n < 0 || n >= MAX)
        {
            cout << "\nIndex out of bounds\n";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{

    DistanceArray darray;
    Distance dist1(3, 2.5), dist2(4, 5.6), dist3(7, 8.4); // 2 argument
    Distance dist4, dist5;                                // default

    darray[0] = dist1;
    darray[1] = dist2;
    darray[2] = dist3;
    darray[3] = dist4;
    darray[4] = darray[2]; // default copy constructor

    darray[0].showdist();
    darray[1].showdist();
    darray[2].showdist();
    darray[3].showdist();
    darray[4].showdist();

    // obj[3] = dist1;
    return 0;
}