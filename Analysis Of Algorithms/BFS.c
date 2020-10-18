#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;

void bfs(int v)
{
	for(i=1;i<=n;i++)
		if(a[v][i] && !visited[i])
			q[++r]=i;
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}

main()
{
	int v;
	printf("Enter The Numbers Of Vertices : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	
	printf("Enter Graph Data In Matrix Form : \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter The Strating Vertex : \n");
	scanf("%d",&v);
	
	bfs(v);
	
	printf("The Node Which Are Rechable Are : \n");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
			printf("%d\t",i);
		else
		{
			printf("BFS Is NOt Possible.");
			break;
		}
	}
}

