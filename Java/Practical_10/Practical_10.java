import java.util.*;

class Practical_10 
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Any 10 Number");
        
        int [] num = new int[10];
        
        for(int i = 0; i < 10; i ++)
            num[i] = in.nextInt();
        
        int temp;
        for(int i = 0, j = 9; i < 10 / 2; i++, j--)
        {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
        
        System.out.println("Reverse Num Is : ");
        
        for(int e: num)
            System.out.print(e + " ");
        System.out.println();
    }
}

/*
Output :
Enter Any 10 Number :
1
2
3
4
5
6
7
8
9
10
Reverse Number Is :
10 9 8 7 6 5 4 3 2 1
*/
