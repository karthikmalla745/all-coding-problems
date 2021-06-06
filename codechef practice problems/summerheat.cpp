#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      int n,m,total;
      n=c/a;
      m=d/b;
      total=n+m;
      cout<<total<<endl;
      
   }
   return 0;
}