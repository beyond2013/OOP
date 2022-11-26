public class Person {
	
	String first_name;
	String last_name;

	
	Person(String fn, String ln)
	{
		first_name = fn;
		last_name = ln;
	}


	//overload toString method
	
  public String toString()
	{
    String str="\n====================\n";
		str = str + "\t" + first_name + " " + last_name;
		str = str + "\n====================\n";
		return str;
	}



	public static void main(String[] args)
	{
		Person p = new Person("Imran", "Ali");
		System.out.println(p);
	}

}
