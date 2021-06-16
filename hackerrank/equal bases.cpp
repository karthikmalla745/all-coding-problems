#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,count=0;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        
        if(n%i==0)
            count++;
    }
    cout<<count-1;
    return 0;
}