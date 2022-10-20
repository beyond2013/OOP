class Triangle
{
	// data members
	int base, perp, hyp;

	// constructor
	
	Triangle()
	{
		base=1; 
		perp=3;
		hyp=2;
	}

  Triangle(int b, int p, int h)
	{
		base = b;
		perp = p;
		hyp = h;
	}

	// methods

	int area()
	{
		return (base*perp)/2;
	}

	int perimeter()
	{
		return base + perp + hyp;
	}

	public static void main(String[] args)
	{
		Triangle tobj, tobj2;
		tobj = new Triangle();

		System.out.println("Area = " + tobj.area());
		System.out.println("Perimeter = " + tobj.perimeter());

		tobj2 = new Triangle(3,4,5);

		System.out.println("Area = " + tobj2.area());
		System.out.println("Perimeter = " + tobj2.perimeter());


	} 
}






