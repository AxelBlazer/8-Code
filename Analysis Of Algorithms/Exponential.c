#include<stdio.h>
#include<conio.h>
int Power(int,unsigned int);
int main()
{
	int a;
	unsigned int n;
	
	printf("Enter The Value Of A\n");
	scanf("%d",&a);
	printf("Enter The Value Of N\n");
	scanf("%d",&n);
	
	printf("Ans Is %d",Power(a,n));
	
	return 0;
}
int Power(int a,unsigned int n)
{
	if(n==0)
		return 1;
	else if(n%2==0)
		return Power(a*a,n/2);
	else
		return a*Power(a*a,n/2);
}

