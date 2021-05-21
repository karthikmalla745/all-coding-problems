#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	   long long n,k,i,j;
	   cin>>n>>k;
	   
	   long long a[n];
	   bool b=0;
	   
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   sort(a,a+n);
	   i=0;j=n-1;
	   
	   while(j>i)
	   {
	      if(a[i]+a[j]<k)
	      {
	         i++;
	      }
	      else if(a[i]+a[j]>k)
	      {
	         j--;
	      }
	      else if(a[i]+a[j]==k)
	      {
	         b=1;
	         break;
	      }
	   }
	   if(b)
	   {
	      cout<<"Yes";
	   }
	   else
	   {
	      cout<<"No";
	   }
	   cout<<endl;
	}
	return 0;
}