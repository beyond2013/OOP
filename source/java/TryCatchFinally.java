/*
 * The finally statement lets you execute code, 
 * after try...catch, regardless of the result:
 *
 *
*/


public class TryCatchFinally {
	public static void main(String[] args)
	{
		try
		{
			int a = 4/2;
			System.out.println(a);
		}
    catch(Exception e)
		{
      System.out.println(e);
		}
    finally
		{
      System.out.println("This message is printed by println function in finally block");
		}
	}
}
