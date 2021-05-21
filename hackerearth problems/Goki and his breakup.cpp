/*
input:
5
100
110
130
90
100
45

output:
YES
YES
NO
YES
NO

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int x;
	cin>>x;
	while(n--)
	{
		int y;
		cin>>y;

		if(y>=x)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}