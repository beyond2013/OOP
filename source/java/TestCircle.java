public class TestCircle 
{
	
	public static void main(String[] args)
	{
		Circle cobj;
		cobj = new Circle();

		Circle cobj2 = new Circle((float) 2.3);

		System.out.println(cobj.area());
		System.out.println(cobj2.circumference());

	}
}
