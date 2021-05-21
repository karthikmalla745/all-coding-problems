#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      double q,p,total;
      cin>>q;
      cin>>p;
      
      if(q>1000)
      {
         total=0.9*q*p;
         cout<<fixed<<setprecision(6)<<total;
         
      }
      else
      {
         cout<<fixed<<setprecision(6)<<(q*p);
         
      }
      cout<<endl;
   }
}