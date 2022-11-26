public class Student extends Person
{
 
	Student(String fn, String ln)
	{
		super(fn, ln);
	}

	public static void main(String[] args)
	{
		Student s1 = new Student("Moin", "Khan");
		System.out.println(s1);
	}
}
