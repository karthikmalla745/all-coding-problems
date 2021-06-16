#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],p[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
        
    }
    for(i=0;i<n-1;i++)
    {
        if(p[i]<p[i+1])
        {
            p[i+1]=p[i];
        }
    }
    int min=0;
    for(i=0;i<n;i++)
    {
        min=min+a[i]*p[i];
    }
    cout<<min;
    return 0;
    
}