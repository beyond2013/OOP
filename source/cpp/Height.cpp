#include<iostream>
using namespace std;
class Height
{
	private:
		int feet;
		int inches;
	public:
		void setheight(int ft, int in)
		{
			feet = ft;
			inches = in;
		}

		void showheight()
		{
			cout << feet << "\'-" << inches <<'\"' << "\n";
		}
};

int main ()
{
	Height h1, h2, h3;
	h1.setheight(5,9);
	h2.setheight(6,4);
	h1.showheight();
	h2.showheight();
//  h3.showheight();
	return 0;
}

