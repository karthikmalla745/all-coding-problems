#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    
    if(n==0)
        cout<<"0";
    else
    {
    double d=0;
    for(i=2;i<=n;i++)
      d += log10(i);
    
    cout<<floor(d)+1;
    }
    
    return 0;
}