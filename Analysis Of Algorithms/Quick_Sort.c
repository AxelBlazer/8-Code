#include<stdio.h>
#include<conio.h>
int Partition(int [],int,int);
int Quick(int [],int,int);

int main()
{
	int a[20],i,n;
	
	printf("Enter The Number Of Elements\n");
	scanf("%d",&n);
	printf("Enter The %d Elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	Quick(a,0,n-1);
	
	printf("Elements In Ascending Order\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		
	return 0;
}
int Partition(int a[],int low,int high)
{
	int pivot=a[high];
	int i=low-1,j,temp;
	
	for(j=low;j<=high-1;j++)
		if(a[j]<pivot)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	temp=a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
	
	return(i+1);
}
int Quick(int a[],int low,int high)
{
	if(low<high)
	{
		int p=Partition(a,low,high);
		Quick(a,low,p-1);
		Quick(a,p+1,high);
	}
}
