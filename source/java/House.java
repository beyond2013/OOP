public class House {
	
	double area; // area in square foot
  int floors;  // number of floors in the house e.g. 2 in a multi story building
  int rooms;   // number of rooms in the house
	boolean basement; // whether the house has basement
  boolean parking;  // whether the house has parking area
	boolean garden; // whether the house has garden


	// default constructor

	House()
	{
		area = 1200.00;
    floors= 1;
		basement = false;
		parking = false;
		garden = false;
	}

	// constructor
	House(double a, int fl, int r, boolean b, boolean p, boolean g)
	{
		area = a ;
		floors = fl;
		basement = b;
		parking = p;
		garden = g;
	}

 //over-riding toString() of the base class
 public String toString()
 {
	 String str;
	 str = new String("Area " + area);
	 str += "\n";
	 str += "Number of Floors: " + floors;
	 str += "\n";
   str += "Number of Rooms: " + rooms;
	 str += "\n";
	 str += "Has basement: " + basement;
	 str += "\n";
	 str += "Has parking: " + parking;
	 str += "\n";
	 str += "Has garden: " + garden;
	 return str;
 }

 public static void main(String[] args)
 {
	 House myhouse = new House();
	 System.out.println(myhouse);
 }

}
