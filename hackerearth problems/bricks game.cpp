#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    
    for( int i=0;i<n;i++)
    {
        count=count+i;
        if(count>n)
        {
            cout<<"patlu\n";
            break;
        }
        count=count+(2*i);
        if(count>n)
        {
            cout<<"motu\n";
            break;
        }
    }
}