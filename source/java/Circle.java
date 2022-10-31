public class Circle {

	float radius;

	Circle()
	{
		radius = (float) 1.0;
	}

	Circle(float radius)
	{
		this.radius = radius;
	}
	
	float area()
	{
		return (float) Math.PI * (float) Math.pow(radius, 2);
	}

	float circumference()
	{
		return 2 * 22/7 * radius;
	}

}
