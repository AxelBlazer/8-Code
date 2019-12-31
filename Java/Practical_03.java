import java.util.*;

class Practical_03
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        final double FEET_PER_METERS = 3.2808;
	System.out.print("Enter The Value Of Meter: ");
	double meter = in.nextDouble();
	double feet = meter * FEET_PER_METERS;
	System.out.println(meter + " Meter is " + feet + " Feet");
    }
}

/*
Output : 
Enter The Value Of Meter:
10
10.0 Meter is 32.808 Feet.
*/
