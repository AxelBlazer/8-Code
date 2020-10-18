#include<stdio.h>
#include<conio.h>
int binary(int,int,int []);

int main()
{
	int n,a[20],i,search;
	
	printf("Enter Value Of N\n");
	scanf("%d",&n);
	printf("Enter %d Number\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter No. You Want To Search\n");
	scanf("%d",&search);
	
	binary(search,n,a);
		
	return 0;
}
int binary(int search,int n,int a[])
{
	int first=0,last=n,mid;
	
	while(first<=last)
	{
		mid=(first+last)/2;
		
		if(a[mid]==search)
		{
			printf("No. %d Is Present At %d Index",search,mid+1);
			break;
		}
		else
		if(a[mid]<search)
			first=mid+1;
		else
			last=mid-1;
	}
	if(first>last)
		printf("%d Is Not Present",search);
}
