import java.util.Scanner;

class Practical_06
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter Any Letter ");
       
        char ch = in.next().charAt(0);
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
            System.out.println(ch + " Is Vowel");
        else
            System.out.println(ch + " Is A Constant");
    }
}

/*
Output :
Enter Any Letter
j
j is A Constant 
Enter Any Letter
a
a is A Vowel
*/
