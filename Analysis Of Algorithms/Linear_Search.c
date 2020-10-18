#include<stdio.h>
#include<conio.h>
int linear(int,int,int []);

int main()
{
	int n,a[20],i,search,flag;
	
	printf("Enter Value Of N\n");
	scanf("%d",&n);
	printf("Enter %d Number\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter No. You Want To Search\n");
	scanf("%d",&search);
	
	flag=linear(search,n,a);
	
	if(flag==-1)
		printf("No. %d Is Not Present",search);
	else
		printf("No. %d Is Present At %d Index",search,flag+1);
		
	return 0;
}
int linear(int search,int n,int a[])
{
	int i;
	
	for(i=0;i<n;i++)
		if(a[i]==search)
			return i;
			
	return -1;
}
