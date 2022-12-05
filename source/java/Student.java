public class Student extends Person
{

	char grade;

	public Student(String fn, String ln, char g)
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
		Person p1 = new Person("Imran", "Ali");
		Student s1 = new Student("Moin", "Khan", 'A');
    
		Person[] p = new Person[2];
		p[0] = p1;
		p[1] = s1;


		for( int i=0; i < p.length ; i++)
			System.out.println(p[i]);
	}
}
