import java.util.*;

class Practical_02
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        System.out.print("Enter a, b, c, d, e, f: ");
        
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();
        double d = in.nextDouble();
        double e = in.nextDouble();
        double f = in.nextDouble();
        
        if((a*d - b*c) == 0)
            System.out.println("The equation has no solution");
        else
        {
            double x = ((e*d) - (b*f)) / ((a*d) - (b*c));
            double y = ((a*f) - (e*c)) / ((a*d) - (b*c));
            
            System.out.printf("x is %.2f and y is %.2f", x, y);
        }
    }
}

/*
Output : Enter a, b, c, d, e, f: 3.4 50.2 2.1 0.55 44.5 5.9
x is 2.62 and y is 0.71
/*
