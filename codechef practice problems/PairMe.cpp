#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
       while(t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      
      if(a>b && a>c)
      {
         if(a==(b+c))
         {
            cout<<"YES";
         }
         else
         {
            cout<<"NO";
         }
         
      }
       else if(b>a && b>c)
       {
          if(b==(a+c))
          {
             cout<<"YES";
          }
          else
          {
             cout<<"NO";
          }
       }
       else if(c>a && c>b)
       
       {
          if(c==(a+b))
          {
             cout<<"YES";
          }
          else
          {
             cout<<"NO";
          }
       }
       else
       {
          cout<<"NO";
       }
       cout<<endl;
   }
	return 0;
}
