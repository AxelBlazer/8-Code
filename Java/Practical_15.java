import java.util.*;

class Practical_15 
{
	public static int BinaryToDecimal(String BinaryString) throws NumberFormatException 
	{
    		int a=0;
		int Decimal = 0;
		for (int i = 0, j = BinaryString.length() - 1; i < BinaryString.length(); i++, j--) 
		{
			if (BinaryString.charAt(i) < '0' || BinaryString.charAt(i) > '1')
				throw new NumberFormatException("The String Is Not A Binary String");
			Decimal += (Integer.parseInt(String.valueOf(BinaryString.charAt(i)))) * Math.pow(2, j);
		}
		System.out.println("Decimal Number Is : "+Decimal); 
		return Decimal;
	}
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
      		System.out.print("Enter A Binary Number : ");
       		String BinaryString =input.nextLine();
		BinaryToDecimal(BinaryString);
		
	} 
}

/*
Output :
Enter A Binary Number : 101010
Decimal Number Is : 42
*/
