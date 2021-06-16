#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,i,j;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}