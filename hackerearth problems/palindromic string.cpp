/*
input:
aba

output:
yes
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    int n=s.length()-1;
    int i=0;
    while(i<=n)
    {
        if(s[i++]!=s[n--])
        {
            cout<<"NO";
            return 0;
        }
        if(s[i++]==s[n--])
        {
            continue;
        }
    }
    cout<<"YES";
    return 0;
}