#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n],i;
        for(i=0;i<n;i++)
        cin>>a[i];

        reverse(a,a+n);

        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;

    }
    return 0;
}