#include <iostream>
using namespace std;

class foo
{
private:
    int count;

public:
    foo()
    {
        count = 0;
        count++;
    }

    int getcount()
    {
        return count;
    }
};

int main()
{
    // foo f1, f2, f3;
    foo f1;
    cout << "count is " << f1.getcount() << endl;
    foo f2;
    cout << "count is " << f2.getcount() << endl;
    foo f3;
    cout << "count is " << f3.getcount() << endl;
    return 0;
}