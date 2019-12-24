import java.util.*;

class Practical_08 
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        System.out.print("Enter Any Number : ");
        int num = in.nextInt();
        int index = 2;
        
        while(num / index != 1)
        {
            if(num % index == 0)
            {
                System.out.print(index + ",");
                num /= index;
            }
            else
                index++;
        }
        System.out.println(num + "."); 
    }
}

/*
Output :
Enter Any Number : 120
2,2,2,3,5.
*/
