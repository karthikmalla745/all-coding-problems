#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int product=1,sum=0;
            for(int j=i;j>=0;j--)
            {
                product*=arr[j];
                sum+=arr[j];
                if(sum==product)
                {
                    count++;
                }
                
            }
        }
        cout<<count <<endl;
        
    }
	
	return 0;
}