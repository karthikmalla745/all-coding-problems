#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    int sum=0,k=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
        k=k+a[i][n-1-i];
    }
    s=sum+k;
    
    if(n%2==0)
    {
        cout<<s;
    }
    else
    {
        cout<<s-a[n/2][n/2];
    }
    return 0;
}