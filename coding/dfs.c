#include<stdio.h>
#include<stdlib.h>

int a[10][10], visited[10]={0},n;

int dfs(int i)
{
    int j;
    printf("%d  ",i);
    visited[i]=1;
    for(j=1;j<=n;j++)
    
    if( !visited[j] && a[i][j]==1)
            
    return dfs(j);
}

int main()
{
    int i,j;
    scanf("%d",&n);
    int e;
    scanf("%d",&e);
    while(e--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        a[y][x]=1;
     
    }
    dfs(1);
   
    return 0;
}