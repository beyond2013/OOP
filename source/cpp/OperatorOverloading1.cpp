#include <iostream>
using namespace std;
class Counter
{
private:
    unsigned int count; // count
public:
    Counter() : count(0) // constructor
    {
    }
    unsigned int get_count() // return count
    {
        return count;
    }

    void operator++() // increment (prefix)
    {
        count++;
    }
};
int main()
{
    Counter c1, c2;
    int num1 = 4;
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();
    ++c1;
    cout << "\nc1=" << c1.get_count(); // display again
    num1++;
    cout << "\n num1=" << num1 << endl;

    // cout << "\nc2=" << c2.get_count() << endl;
    /* ++c2;
     ++c2;*/
    //  c2 = ++c1;
    return 0;
}
