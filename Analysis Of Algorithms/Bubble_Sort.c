#include<stdio.h>
#include<conio.h>
int Bubble(int [],int);

int main()
{
	int a[20],n,i;
	printf("Enter The Number Of Elements\n");
	scanf("%d",&n);
	printf("Enter The %d Elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	Bubble(a,n);
	
	printf("After Sortingn\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		
	return 0;	
}
int Bubble(int a[],int n)
{
	int i,j,temp;
	
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}
