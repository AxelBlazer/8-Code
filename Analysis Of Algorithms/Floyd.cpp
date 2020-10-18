#include<stdio.h>
int min(int,int);
void floyds(int p[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(i==j)
					p[i][j]=0;
				else
					p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
}

int min(int a,int b)
{
	if(a<b)
		return(a);
	else
		return(b);
}

main()
{
	int p[10][10],w,n,e,u,v,i,j;;
	printf("Enter The Number Of Vertices:\n");
	scanf("%d",&n);
	printf("Enter The Number Of Eges:\n");
	scanf("%d",&e);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			p[i][j]=999;
	}
	for(i=1;i<=e;i++)
	{
		printf("Enter The End Vertices Of Edge %d With Its Weight \n",i);
		scanf("%d %d %d",&u,&v,&w);
		p[u][v]=w;
	}
	printf("\nMatrix Of Input Data:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d \t",p[i][j]);
		printf("\n");
	}
	floyds(p,n);
	printf("\nTransitive Closure:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d \t",p[i][j]);
		printf("\n");
	}
	printf("The Shortest Paths Are:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(i!=j)
				printf("<%d,%d>=%d\n",i,j,p[i][j]);
		}
}
