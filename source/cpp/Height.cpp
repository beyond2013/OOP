#include <iostream>
using namespace std;
class Height
{
private:
	int feet;
	int inches;

public:
	/* another way of writing
	Height()
	{
		feet = 0;
		inches = 0;
	}
	*/

	Height() : feet(0), inches(0) {} // this is constructor

	void setheight(int ft, int in)
	{
		feet = ft;
		inches = in;
	}

	void showheight()
	{
		cout << feet << "\'-" << inches << '\"' << "\n";
	}

	void add_height(Height h1, Height h2)
	{
		inches = h1.inches + h2.inches;
		feet = 0;
		if (inches >= 12)
		{
			inches -= 12;
			feet++;
		}
		feet += h1.feet + h2.feet;
	}
};

int main()
{
	Height h1, h2, h3; // created 3 objects of class Height, constructor automatically called

	/* taking user input for object
	 */

	int h1_feet, h1_inches, h2_feet, h2_inches;
	cout << "\n Enter value for h1.feet ";
	cin >> h1_feet;
	cout << "\n Enter value for h1.inches";
	cin >> h1_inches;

	cout << "\n Enter value for h2.feet ";
	cin >> h2_feet;
	cout << "\n Enter value for h2.inches";
	cin >> h2_inches;
	h1.setheight(h1_feet, h1_inches);
	h2.setheight(h2_feet, h2_inches);
	cout << "h1" << endl;
	h1.showheight();
	cout << "h2" << endl;
	h2.showheight();

	h3.add_height(h1, h2);
	cout << "h3" << endl;
	h3.showheight();
	return 0;
}
