import java.util.*;

class Practical_05
{
    public static void main(String args[])
    {
        int a,b,c,temp;
        
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter The Value of a, b, c");
        
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        
        if(b < a || c < a)
        {
            if(b < a)
            {
                temp = a;
                a = b;
                b = temp;
            }
            if(c < a)
            {
                temp = a;
                a = c;
                c = temp;
            }
        }
        if(c < b)
        {
            temp = b;
            b = c;
            c = temp;
        }
        System.out.println(a + " " + b + " " + c);
    }
}

/*
Output :
Enter The Value of a, b, c
5
3
7
3 5 7
*/
