#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,even=0,odd=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   cin>>a[i];
   
   for(i=0;i<n;i++)
   {
      if(a[i]%2==0)
      {
         even++;
      }
      else
      {
         odd++;
      }
   }
   if(even>odd)
   {
      cout<<"READY FOR BATTLE";
   }
   else
   {
      cout<<"NOT READY";
   }
   
   return 0;
}
