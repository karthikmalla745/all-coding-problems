/*

input:
abcdE

output:
ABCDe

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    int n=s.length();
    int i;
    
    for(i=0;i<n;i++)
    {
        if(s[i]>64 && s[i]<91)
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>96 && s[i]<123)
            
        {
            s[i]=s[i]-32;
        }
    }
    cout<<s;
    return 0;
}