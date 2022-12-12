/*
 *
 * When executing Java code, different errors can occur:
 * - coding errors made by the programmer, 
 * - errors due to wrong input, or
 * - other unforeseeable things.
 *
   When an error occurs, Java will:

	 1. normally stop and
	 2. generate an error message. 

	 The technical term for this is: Java will throw an exception (throw an error).

 *  
 */
public class WithoutTry {
	
	public static void main(String[] args)
	{
		// int a = 4/0;
		// System.out.println(a);
		
// uncomment code below to see another example

    int[] RollNo = {10, 11, 15, 18, 21, 23};

	  System.out.println(RollNo[6]);

	}

}
