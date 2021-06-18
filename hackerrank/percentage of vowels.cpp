#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    int i,n=s.length();
    float p=1.0000,v=0.0;
    
    for(i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            v=v+1;
        }
    }
    p=(v*100)/n;
    cout<<p;
    return 0;
}