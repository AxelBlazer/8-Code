#include<stdio.h>
#include<conio.h>
int Merge(int [],int,int,int,int);
int MergeSort(int [],int,int);

int main()
{
	int a[20],i,n;
	
	printf("Enter The Number Of Elements\n");
	scanf("%d",&n);
	printf("Enter The %d Elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	MergeSort(a,0,n-1);
	
	printf("Elements In Ascending Order\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		
	return 0;
}
int Merge(int a[],int f1,int l1,int f2,int l2)
{
	int i,j,k=0,temp[20];
	i=f1;
	j=f2;
	
	while(i<=l1 && j<=l2)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	while(i<=l1)
		temp[k++]=a[i++];
	while(j<=l2)
		temp[k++]=a[j++];
	
	for(i=f1,j=0;i<=l2;i++,j++)
		a[i]=temp[j];
}
int MergeSort(int a[],int i,int j)
{
	int mid;
	
	if(i<j)
	{
		mid=(i+j)/2;
		MergeSort(a,i,mid);
		MergeSort(a,mid+1,j);
		Merge(a,i,mid,mid+1,j);
	}
}
