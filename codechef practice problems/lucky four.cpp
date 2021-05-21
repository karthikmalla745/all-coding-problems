#include <bits/stdc++.h>
using namespace std;

int main() 
{
   long long t;
   cin>>t;
   while(t--)
   {
      long long n,r,c=0;
      cin>>n;
      while(n>0)
      {
         r=n%10;
         n=n/10;
         if(r==4)
         {
            c=c+1;
            
         }
      }
      cout<<c;
      cout<<endl;
   }
	return 0;
}
