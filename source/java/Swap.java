public class Swap
{
	public static void main(String[] args)
	{
		int a, b;
		a = 5;
		b = 7;

		swap(a,b);
		System.out.println(a + " , " + b);
	}

	public static void swap(int x, int y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
}


