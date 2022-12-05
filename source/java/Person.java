public abstract class Person {
	
	protected String first_name;
	protected String last_name;

	
	Person(String fn, String ln)
	{
		first_name = fn;
		last_name = ln;
	}


	//override toString method
	
  public abstract String toString();
	




	public static void main(String[] args)
	{
		Person p; //= new Person("Imran", "Ali");
		//System.out.println(p);
	}

}
