#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,q;
    cin>>n;
        q=n/5;
        r=n%5;
    if(r==0)
    {
        cout<<q;
    }
    else
    {
        cout<<q+1;
    }
    return 0;
    
}