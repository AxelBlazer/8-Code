#include<stdio.h>
#include<conio.h>
void DFS(int);
int G[10][10],visited[10],n;
int main()
{
	int i,j ;
	printf("Enter The No. Of Nodes:\n");
	scanf("%d", &n);
	printf("Enter Matrix Of The Graph :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d" , &G[i][j]);
	for(i=0;i<n;i++)
		visited[i]=0;
	printf("\nTravarsal Is:");
	DFS(0);
}

void DFS( int i)
{
	int j;
	printf("\n%d",i);
	visited[i]=1;
	for(j=0;j<n;j++)
		if(!visited[j]&&G[i][j]==1)
			DFS(j);
}
