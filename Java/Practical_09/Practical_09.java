import java.util.*;

class Practical_09 
{
    static int gcd(int x,int y)
    {
        int r = 0,a,b;
        
        a = (x > y) ? x : y;
        b = (x < y) ? x : y;
        r = b;
        
        while(a % b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        return r;
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Any Two Number");
        
        int x = in.nextInt();
        int y = in.nextInt();
        
        System.out.println("The GCD Of Two Number Is : " + gcd(x,y));
        in.close();
    }
}

/*
Output :
Enter Any Two Number :
15
25
The GCD Of Two Number Is : 5
*/
