import java.util.*;

class Loan
{
	double Amount,Interest,Duration,Total;
	Loan()
	{
		Amount = 0;
		Interest = 0;
		Duration = 0;
		Total = 0;
	}
}
class Circle
{
	double radius;
	Circle()
	{
		radius = 0;
	}
}

class Practical_14
{
	public static void main(String args[])
	{
		Loan L = new Loan();
		Circle C = new Circle();
		String Str = new String("SSEC");
		Date D = new Date();

		ArrayList arrlist = new ArrayList(4);

		arrlist.add(L);
		arrlist.add(C);
		arrlist.add(Str);
		arrlist.add(D);

		for(int i = 0; i < arrlist.size(); i++)
			System.out.println(arrlist.get(i));
	}
}

/*
Output:
Loan@65e579dc
Circle@61baa894
SSEC
Thu Feb 13 15:00:01 EST 2020
*/
