import java.util.*;

class Practical_13
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Enter Any Equation");
		String a = in.nextLine();
		a = a.replaceAll(" ","");
		String n1="", n2="", op="";

		for(int i = 0; i < a.length(); i++)
		{
			char ch = a.charAt(i);
			if(op.equals(""))
			{
				if((ch >= '0' && ch <= '9') || ch == '.')
					n1 += ch;
				else
					op += ch;
			}
			else
				n2 += ch;
		}
		System.out.println("\nSeperate Equation");
		System.out.println(n1+" ");
		System.out.println(op+" ");
		System.out.println(n2+" ");

		double no1 = Double.parseDouble(n1);
		double no2 = Double.parseDouble(n2);
		double result=0;

		if(op.equals("+"))
		{
			result = no1 + no2;
			System.out.println("\nResult Is");
			System.out.println(no1 + op + no2 + "=" + result);
		}
		if(op.equals("-"))
		{
			result = no1 - no2;
			System.out.println("\nResult Is");
			System.out.println(no1 + op + no2 + "=" + result);
		}
		if(op.equals("*"))
		{
			result = no1 * no2;
			System.out.println("\nResult Is");
			System.out.println(no1 + op + no2 + "=" + result);
		}
		if(op.equals("/"))
		{
			result = no1 / no2;
			System.out.println("\nResult Is");
			System.out.println(no1 + op + no2 + "=" + result);
		}
	}
}

/*
Output :
Enter Any Equation
5      +  9

Seperate Equation
5 
+ 
9 

Result Is
5.0+9.0=14.0
*/
