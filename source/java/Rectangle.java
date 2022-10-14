class Rectangle
{
	// data members
	int length, width;

	// constructor
  Rectangle(int l, int w)
	{
		length = l;
		width = w;
	}

	// methods

	int area()
	{
		return length * width;
	}

	int perimeter()
	{
		return 2 * (length + width);
	}

}






