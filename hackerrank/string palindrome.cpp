#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string strn(s);
        
    reverse(s.begin(),s.end());
    if(s==strn)
        cout<<"yes";
    else
        cout<<"no";
    
}