// Nameless temporary Objects
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
    Counter(int c) : count(c) // constructor
    {
    }

    unsigned int get_count() // return count
    {
        return count;
    }

    /* compare the return statement in the following function
       to OperatorOverloading2.cpp,
       where this is done in 3 lines of code
    */
    Counter operator++() // increment (prefix)
    {
        ++count;
        return Counter(count);
    }
};
int main()
{
    Counter c1, c2;
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();
    c2 = ++c1;                         // using overloaded operator ++ in assignment
    cout << "\nc1=" << c1.get_count(); // display again
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}
