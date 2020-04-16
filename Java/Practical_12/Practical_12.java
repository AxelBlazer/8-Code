import java.util.*;

class Practical_12
{
  public static void main(String args[])
  { 
    Random rn = new Random(1000);
     
    for(int i = 0; i <=49; i++)
    {
      if(i % 10 == 0)
        System.out.printf("%5d\n", rn.nextInt(49));
      else
        System.out.printf("%5d", rn.nextInt(49));
    }
  }
}

/*
Output :
    1   17    0   46   46    4   33    9   40   25
   13   17   29   30   31   42   35   48   40   11
   13   10    0   38    9    0   10   35   10   14
   26   34   35   31   43   47   35    2   33   16
   48   45   43    5   29    1   35    0   25   40
*/
