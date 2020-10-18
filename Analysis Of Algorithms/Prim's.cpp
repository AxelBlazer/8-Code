#include<stdio.h>
#include<conio.h>
int n,cost[10][10];
void prim()
{
	int i,j,startvertex,endvertex;
	int k,nr[10],temp,minimumcost=0,tree[10][3];
	temp=cost[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(temp>cost[i][j])
			{
				temp=cost[i][j];
				startvertex=i;
				endvertex=j;
			}
		}
	}
	tree[0][0]=startvertex;
	tree[0][1]=endvertex;
	tree[0][2]=temp;
	minimumcost=temp;
	for(i=0;i<n;i++)
	{
		if(cost[i][startvertex]<cost[i][endvertex])
			nr[i]=startvertex;
		else
			nr[i]=endvertex;
	}
	nr[startvertex]=100;
	nr[endvertex]=100;
	temp=99;
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(nr[j]!=100 && cost[j][nr[j]]<temp)
			{
				temp=cost[j][nr[j]];
				k=j;
			}
		}
		tree[i][0]=k;
		tree[i][1]=nr[k];
		tree[i][2]=cost[k][nr[k]];
		minimumcost=minimumcost+cost[k][nr[k]];
		nr[k]=100;
		for(j=0;j<n;j++)
		{
			if(nr[j]!=100 && cost[j][nr[j]]>cost[j][k])
			nr[j]=k;
		}
		temp=99;
	}
	printf("The Main Spanning Tree Is:\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",tree[i][j]);
		}
	}
	printf("Min Cost: %d\n",minimumcost);
}
int main()
{
	int i,j;
	printf("Enter The No. Of Vertices:\n");
	scanf("%d",&n);
	printf("Enter The Costs Of Edges In Matrix Form:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	printf("The Matrix Is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",cost[i][j]);
		}
		printf("\n");
	}
	prim();
	getch();
}
