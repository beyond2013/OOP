class Rectangle
{
	// data members
	private int length, width;

	// default constructor
	Rectangle()
	{
		length = 4;
		width = 3;
	}

	// constructor
  Rectangle(int l, int w)
	{
		length = l;
		width = w;
	}

	// getters
	
	public int getLength()
	{
		return length;
	}


	//setters
	
  public void setLength(int l)
	{
		length = l;
	}

	// methods

	public int area()
	{
		return length * width;
	}

	public int perimeter()
	{
		return 2 * (length + width);
	}

	public static void main(String[] args)
	{
      Rectangle robj;  // object declare

			robj = new Rectangle();
			System.out.println("robj.length = " + robj.length);
		  System.out.println("Area = " + robj.area());

	}

}






