#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+(s[i]-96);
    }
    cout<<sum;
    return 0;
}