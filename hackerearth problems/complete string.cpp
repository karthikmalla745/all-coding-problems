#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<char,int> m;

		string s;
		cin>>s;

		int count=0;

		for(auto i : s)
		{
			m[i]++;
		}

		for(auto x : m)
		{
			if(isalpha(x.first))
			{
				count++;
			}
		}
			if(count==26)
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