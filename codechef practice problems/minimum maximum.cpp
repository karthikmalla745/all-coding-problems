#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      long long n,i,sum=0;
      cin>>n;
      long long a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
      
      sort(a,a+n);
      
      sum=sum+(a[0]*(n-1));
      cout<<sum<<endl;
   }
   return 0;
}