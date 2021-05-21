#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int t=0,r=0;
		long long ar[n],i;
		for(i=0;i<n;i++)
		{
				cin>>ar[i];


			if(ar[i]%a==0)
			{
				t++;
			}
			if(ar[i]%b==0)
			{
				r++;
			}
		}

			if(t>r)
			{
				cout<<"Rio\n";
			}
			else
			{
				cout<<"Tokyo\n";
			}
		
		
	}
	return 0;
}