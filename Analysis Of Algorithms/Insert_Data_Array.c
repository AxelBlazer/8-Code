#include<stdio.h>
#include<conio.h>
void Insert(int [],int,int,int);
void Display(int [],int);

int main()
{
	int a[20],n,i,inum,pos;
	
	printf("Enter The Number Of Elements\n");
	scanf("%d",&n);
	printf("Enter The %d Elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter The Element You Want To Be Insert\n");
	scanf("%d",&inum);
	printf("Enter The Posistion\n");
	scanf("%d",&pos);

	Insert(a,n,inum,pos);
	
	return 0;
}
void Insert(int a[],int n,int inum,int pos)
{
	int i;
	
	for(i=n-1;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=inum;
	n=n+1;
	
	Display(a,n);
}
void Display(int a[],int n)
{
	int i;
	
	printf("After Insert Element\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
