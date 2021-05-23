#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;

		int t=0,count=0;
		int r= log10(n)+1;

		for(i=0;i<r;i++)
		{
			t=t*10+1;

			for(j=1;j<=9;j++)
			{
				if((t*j)<=n)
				{
					count++;
				}
			}
		}
		cout<<count;
		cout<<endl;

	}
	return 0;
}