#include <iostream>
#include "Distance.h"
using namespace std;
int main()
{
    Distance dist[100]; // array of distances
    int n = 0;          // count the entries
    char ans;           // user response (‘y’ or ‘n’)
    cout << endl;
    do
    { // get distances from user
        cout << "Enter distance number " << n + 1;
        dist[n++].getdist(); // store distance in array
        cout << "Enter another(y / n) ?: ";
        cin >> ans;
    } while (ans != 'n'); // quit if user types 'n'
    for (int j = 0; j < n; j++) // display all distances
    {
        cout << "\nDistance number " << j + 1 << " is ";
        dist[j].showdist();
    }
    cout << endl;
    return 0;
}
