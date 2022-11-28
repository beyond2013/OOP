public class Student extends Person
{

	char grade;

	Student(String fn, String ln, char g)
	{
		super(fn, ln);
    grade = g; 
	}

	//override
	public String toString()
	{
   String str ="\n====================\n"; 
	 str = str +	 super.toString();
	 str = str + "\t";
	 str = str + grade;
   str = str + "\n====================\n";
	 return str;
	}

	public static void main(String[] args)
	{
		Student s1 = new Student("Moin", "Khan", 'A');
		System.out.println(s1);
	}
}
