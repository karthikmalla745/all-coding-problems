#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a>=b)
        {
            cout<<(c/b);
        }
        else
        {
            cout<<(c/a);
        }
        cout<<endl;
    }
    return 0;
}