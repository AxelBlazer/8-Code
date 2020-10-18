#include<stdio.h>
#include<conio.h>
int Insertion(int [],int);

int main()
{
	int a[20],n,pos,i;
	
	printf("Enter The Number Of Elements\n");
	scanf("%d",&n);
	printf("Enter The %d Elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	Insertion(a,n);
	
	printf("Elements In Ascending Order\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		
	return 0;
}
int Insertion(int a[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
