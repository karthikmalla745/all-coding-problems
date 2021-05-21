#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	int count=0;

	while(t--)
	{
		int r,x;
		cin>>r>>x;

		if(x*100.0>=(44.0/7)*r)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}