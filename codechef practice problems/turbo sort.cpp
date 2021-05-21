#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,a[1000000],i;
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
   sort(a,a+n);
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
	return 0;
}