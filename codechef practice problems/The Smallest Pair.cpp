#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
      long long n,i;
      cin>>n;
      long long a[n];
      
      for(i=0;i<n;i++)
      cin>>a[i];
      
      sort(a,a+n);
      
      cout<<(a[0]+a[1]);
      cout<<endl;
   }
   return 0;
}