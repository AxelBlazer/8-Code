#include <stdio.h>
int area(int h, int w);
int area(int h, int w)
{
  int area = h * w;
  return area;
}

int main()
{
  int height, width;
  printf("Enter The Height Of The Rectangle :");
  scanf("%d", &height);
  printf("Enter The Width Of The Rectangle :");
  scanf("%d", &width);
 
  printf("The Area Of The Rectangle Is = %d\n",area(height,width));
}

#Output
Enter The Height Of The Rectangle :
5
Enter The Widht Of The Rectangle :
4
The Area Of The Rectangle Is = 20
#
