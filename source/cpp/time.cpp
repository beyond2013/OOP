#include <iostream>
using namespace std;

class Time
{
	private:
		int hrs, mins, secs;
	public:
		Time():  hrs(0), mins(0), secs(0){ }
    Time(int h, int m, int s): hrs(h), mins(m), secs(s) { }

		void display()
		{ cout << hrs << ":" << mins << ":" << secs << endl; }
};

int main()
{
	Time t1;
	Time t2(2,4,6);
	t1.display();
	t2.display();
	return 0;
}
