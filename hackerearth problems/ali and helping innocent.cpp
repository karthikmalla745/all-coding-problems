#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    if(s[2]=='A' || s[2]=='E' || s[2]=='I' || s[2]=='O' || s[2]=='U' || s[2]=='Y')
    {
        cout<<"invalid\n";
        return 0;
    }
    if((s[0]+s[1])%2!=0 || (s[3]+s[4])%2!=0 || (s[4]+s[5])%2!=0 || (s[7]+s[8])%2!=0)
       {
           cout<<"invalid\n";
        return 0;
       }
       else
       {
           cout<<"valid\n";
       
       }
       return 0;
    
}
       