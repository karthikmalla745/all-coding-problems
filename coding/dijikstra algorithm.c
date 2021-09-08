#include <limits.h>
#include <stdio.h>
#include <stdbool.h>

int min(int dist[], bool sptSet[],int V)
{
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}

void print(int dist[],int V,int dest)
{
  printf("%d\n",dist[dest]);
}

void dij(int n,int graph[][n],int src,int dest)
{
    bool spt[n];
    int dist[n];
    for(int i=0;i<n;++i)
    {
        dist[i]=INT_MAX;
        spt[i]=false;
    }
    dist[src]=0;
    for(int count=0;count < n-1;++count)
    {
        int u=min(dist,spt,n);
        spt[u]=true;
        for(int v=0;v<n;++v)
        {
        if(!spt[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u] + graph[u][v] <dist[v])
            dist[v] = dist[u] + graph[u][v];
        }
    }
    print(dist,n,dest);
}



void main()
{
    int n;
    scanf("%d",&n);
    int graph[n][n];
    for(int i=0;i<n;++i)
    for(int j=0;j<n;++j)
    scanf("%d",&graph[i][j]);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int src,dest;
        scanf("%d %d",&src,&dest);
        dij(n,graph,src,dest);
    }
}