/*
input:
3
9
2
5

output:
*################*
**##############**
***############***
****##########****
*****########*****
******######******
*******####*******
********##********
******************

*##*
****

*########*
**######**
***####***
****##****
**********
*/

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
        int i,j,k,l;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            for(k=1;k<=2*(n-i);k++)
            {
                cout<<"#";
            }
            for(l=1;l<=i;l++)
            {
                cout<<"*";
            }
               cout<<endl;
        }
    }
    return 0;
}
