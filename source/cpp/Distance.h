#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
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
        cout << feet << "\'-" << inches << '\"';
    }
};