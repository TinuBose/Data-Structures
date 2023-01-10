#include<stdio.h>

int adj[20][20], visit[20],n,v,i,j;

void dfs(int);


void main()
{
	
	printf("Enter the no of vertices in the graph \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		visit[i]=0;
		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			adj[i][j]=0;
			
		}
	}
	
	printf("Enter the adjacency matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
			scanf("%d",&adj[i][j]);
			
		}
	}
	
	printf("Enter the starting vertex \n");
	scanf("%d",&v);
	dfs(v);
	
	
}

void dfs(int v)
{
	printf("\n %d",v);
	visit[v]=1;
	for(i=0;i<n;i++)
	{
		if(adj[v][i]==1 && !visit[i]){
		dfs(i);
		}
	}
}
