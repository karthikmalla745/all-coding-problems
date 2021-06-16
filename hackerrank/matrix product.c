#include<stdio.h>
int main()
{
    
    int n,m,p,q;
    scanf("%d%d",&n,&m);
    int a[n][m],b[p][q];
    int i,j,k,c[n][q];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&p,&q);
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m!=p)
    {
        printf("-1");
    }
    
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
              for(k=0;k<p;k++)
              {
                  c[i][j]=a[i][k]*b[k][j];
              }
              
            }
        }
        for (i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
   
    return 0;
}