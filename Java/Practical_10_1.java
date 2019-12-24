import java.util.*;

class Practical_10_1 
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Any 10 Number");
        
        int [] num = new int[10];
        
        for(int i = 0; i < 10; i ++)
            num[i] = in.nextInt();
        
        reverse(num);
        
        System.out.println("Reverse Number Is :");
        for(int e: num)
            System.out.print(e + " ");
        System.out.println();
    }
    
    public static void reverse(int[] arr)
    {
        int temp;
        for(int i = 0, j = arr.length - 1; i < arr.length/2; i++, j--)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
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
