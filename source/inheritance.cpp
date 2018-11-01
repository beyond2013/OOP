#include <iostream>
using namespace std;

class Counter
{
	protected:
		unsigned int count;
	public:
		Counter() : count(0)
	{ }
		Counter(int c) : count(c)
	{ }
		unsigned int get_count() const
		{ return count; }
		Counter operator ++ ()
		{ return Counter(++count); }
};

class CountDn : public Counter
{
	public:
		Counter operator -- ()
		{ return Counter(--count); }
};

int main()
{
	CountDn c1;
	cout << "\nc1=" << c1.get_count(); 
	++c1; ++c1; ++c1;
	cout << "\nc1=" << c1.get_count();
	--c1; --c1;
	cout << "\nc1=" << c1.get_count();
	cout << endl;
	return 0;
}
