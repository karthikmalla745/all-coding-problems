/*
input:
1 10 1

output:
10

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,k,i,count=0;
    cin>>l>>r>>k;
    
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}