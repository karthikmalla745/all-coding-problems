#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   long long n,r,s=0;
	   cin>>n;
	   while(n!=0)
	   {
	      
	      r=n%10;
	      s=s+r;
	      n=n/10;
	   }
	   cout<<s;
	   cout<<endl; 
	   
	}
	   
	return 0;
}
