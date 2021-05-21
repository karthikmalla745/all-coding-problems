#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      long long n,r,rev=0;
      cin>>n;
      while(n!=0)
      {
         r=n%10;
         rev=rev*10+r;
         n=n/10;
      }
      cout<<rev;
      cout<<endl;
      
   }
}