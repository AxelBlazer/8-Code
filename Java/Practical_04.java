import java.util.Scanner;

public class Practical_04
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        double kg_pod = 0.4539237;
        double met_inch = 0.0245;
        
        System.out.println("Enter weight in pounds: ");
        double weight = in.nextDouble();
        System.out.println("Enter hight in inches: ");
        double height = in.nextDouble();
        
        weight = weight*kg_pod;
        height = height*met_inch;
        
        double BodyMassIndex = weight / Math.pow(height, 2);
        
        System.out.println("BMI is " + BodyMassIndex);
    }
}

/*
Output :
Enter weight in pounds:
50
Enter height in inches:
155
BMI is 1.5738281092555517
*/
