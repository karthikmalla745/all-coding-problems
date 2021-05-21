#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    int k;
    cin>>k;

    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<i;
            break;
        }
    }
    
    
    return 0;
}