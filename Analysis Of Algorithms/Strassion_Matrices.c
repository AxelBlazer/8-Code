#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,n;
	int e1,e2,e3,e4,e5,e6,e7;
	
	printf("Enter The No. Of Raw And column\n");
	scanf("%d",&n);
	
	printf("Enter The Elements For 1st Matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter The Elements For 2nd Matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	
	printf("The 1st Matrix Is");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
	}
	printf("\nThe 2nd Matrix Is");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",b[i][j]);
	}
	
	e1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	e2=(a[1][0]+a[1][1])*b[0][0];
	e3=a[0][0]*(b[0][1]-b[0][0]);
	e4=a[1][1]*(b[1][0]-b[0][1]);
	e5=(a[0][0]+a[0][1])*b[1][1];
	e6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
	e7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	
	c[0][0]=e1+e4-e5+e7;
	c[0][1]=e3+e5;
	c[1][0]=e2+e4;
	c[1][1]=e1-e2+e3+e6;
	
	printf("\nMultiplication Using Strassen's Method");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",c[i][j]);
	}
}
