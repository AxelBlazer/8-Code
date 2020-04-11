import java.util.*;

class Practical_16
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
      		System.out.print("Enter Any Number : ");
		float n = in.nextFloat();
       		float a = (int)n;	
		System.out.println("Int Part Is : "+a);
		float c = n - a;
		System.out.println("Fractional Part Is : "+c);	
	}
}

/*
Output :-
Enter Any Number : 25.36
Int Part Is : 25.0
Fractional Part Is : 0.3600006
*/
