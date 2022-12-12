public class WithTry {
	
	public static void main(String[] args)
	{
		try
		{
			int a = 4/0;
			System.out.println(a);

		}
    catch(ArithmeticException e)
		{
      System.out.println("Division by zero not possible");
		}

		try
		{
			int[] RollNo = {10,13,28,39};
			System.out.println(RollNo[5]);
		}

		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("\nYou tried to access an invalid array index");
		}
	}

}

