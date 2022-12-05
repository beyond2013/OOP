public class Teacher extends Person
{
   String grade;

	 Teacher(String fn, String ln, String g)
	 {
		 super(fn, ln);
		 grade = new String(g);
	 }

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
		Person p1 = new Person("Abdul", "Rasheed");
		Student s1 = new Student("Moin", "Khan", 'B');
		Teacher t1 = new Teacher("Imran", "Ali", "Lecturer");

		Person[] p = new Person[3];
	  p[0] = p1;
	  p[1] = s1;
	  p[2] = t1;
   
		for(int i=0;i < p.length; i++)
		  System.out.println(p[i]);
	}
}
