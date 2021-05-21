/*

input:

3
sumit mitsu
ambuj jumba
abhi hibb

output:

YES
YES
NO

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
 {
    string s;
    string r;
    cin>>s;
    cin>>r;
    
    int n=s.length();
    int m=r.length();
    int i,j;
    
   sort(s.begin(),s.end());
    sort(r.begin(),r.end());
    
    if(s==r)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
        cout<<endl;
 }
    return 0;
}