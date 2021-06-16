#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n;
    long long a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
        
    
    cin>>k;
    k=k%n;
    
    for(i=n-k;i<n;i++)
        cout<<a[i]<<" ";
    
    for(i=0;i<n-k;i++)
        cout<<a[i]<<" ";
    
    return 0;
}