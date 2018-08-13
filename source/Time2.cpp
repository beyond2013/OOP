#include <iostream>
using namespace std;

class Time
{
	private:
		int hrs, mins, secs;
	public:
		Time():  hrs(0), mins(0), secs(0){ }
    Time(int h, int m, int s): hrs(h), mins(m), secs(s) { }

    void getTime()
		{
			cout << "Enter value for hours \t ";
			cin >> hrs;
			cout << "Enter value for mins \t ";
			cin >> mins;
			cout << "Enter value for secs \t";
			cin >> secs;
		}
		void display()
		{ cout << hrs << ":" << mins << ":" << secs << endl; }
};

int main()
{
	Time t1;
	Time t2(2,4,6);
	t1.getTime();
	t1.display();
	t2.display();
	return 0;
}
