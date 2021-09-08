#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        a[i]=-1;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ch,k;
        scanf("%d",&ch);
        if(ch==1)       //insertion into hash table
        {
            scanf("%d",&k);
            int h=k%n;
            if(a[h]==-1)
            {
                a[h]=k;
            }
            else
            {
                h++;
                while(a[h]!=-1)
                {
                    h++;
                    if(h>=n)
                    {
                        h=0;
                    }
                }
                a[h]=k;
            }
        }
        else if(ch==3)
        {
            int i;
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        else
        {
            scanf("%d",&k);
            int h=k%n;
            while(a[h]!=k)
            {
                h++;
                if(h>=n)
                {
                    h=0;
                }
            }
            a[h]=-1;
            int temp[n];
            for(int j=0;j<n;j++)
            {
                temp[j]=a[j];
                a[j]=-1;
            }
            for(int j=0;j<n;j++)
            {
                if(temp[j]!=-1)
                {
                    int h=temp[j]%n;
                    if(a[h]==-1)
                    {
                        a[h]=temp[j];
                    }
                    else
                    {
                        h++;
                        while(a[h]!=-1)
                        {
                            h++;
                            if(h>n)
                            {
                                h=0;
                            }
                        }
                        a[h]=temp[j];
                    }
                }
            }
        }
    }
}