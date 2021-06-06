#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int D,d,p,q,c=0;
    cin>>D>>d>>p>>q;
    
    int n= D/d;
    
        if(n%2==0)
        {
    c+= d*((n/2)*(2*p+(n-1)*q));
        }
        else
        {
              c+= d*(n*(p+((n-1)/2)*q));
        }
    
    c+=(D%d)*(p+(n)*q);
    
    cout<<c;
    cout<<endl;
    }
    return 0;
}