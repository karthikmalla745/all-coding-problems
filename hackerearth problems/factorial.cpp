#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,f=1;

	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<f;
	return 0;
}