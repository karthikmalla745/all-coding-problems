#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r;
    cin>>n;
    long long a[n],i;
    
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        r=a[i]%10;
        
        
    }
    if(r==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    
    
    return 0;
}