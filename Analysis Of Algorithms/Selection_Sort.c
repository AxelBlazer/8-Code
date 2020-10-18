#include<stdio.h>
#include<conio.h>
int Selection(int [],int);

int main()
{
	int a[20],n,pos,i;
	
	printf("Enter The Number Of Elements\n");
	scanf("%d",&n);
	printf("Enter The %d Elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	Selection(a,n);
	
	printf("Elements In Ascending Order\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		
	return 0;
}
int Selection(int a[],int n)
{
	int i,j,temp,pos;
	
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
				pos=j;
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
}
