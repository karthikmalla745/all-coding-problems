/*
input:

1
cde
abc

output:
4

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    string s,r;
    cin>>s>>r;
    int n=s.length();
    int m=r.length();
    int i,j,count=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i]==r[j])
            {
                count++;
								r[j]='0';
								break;
            }
        }
    }
    int z;
    z=(n+m)-(count*2);
    cout<<z;
		cout<<endl;
	}
    return 0;
}