/*

input:

3
6
bazeci
3
abu
1
o

output:
3
1
0

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count=0;
        cin>>n;
        
        char s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        if(n==1)
        {
            cout<<"0";
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                {
                    if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
                    {
                        count++;
                    }
                }
            }
            cout<<count;
            
        }
        cout<<endl;
    }
    return 0;
}