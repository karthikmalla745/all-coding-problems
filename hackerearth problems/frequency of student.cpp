/*
input:
5
sumit
ambuj
himanshu
ambuj
ambuj

output:
ambuj 3
himanshu 1
sumit 1

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;

	map<string,int> m;

	for(i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]++;
	}

	for(auto it : m)
	{
		cout<<it.first<<" "<<it.second;
		cout<<endl;
	}
	return 0;
}
