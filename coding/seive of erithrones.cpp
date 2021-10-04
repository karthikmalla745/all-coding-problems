#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=1;
    }
    a[0]=0;
    a[1]=0;
    
    for(i=2;i<n;i++)
    {
        if(a[i]==1)
        {
            for(j=2;i*j<n;j++)
            {
                a[i*j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}