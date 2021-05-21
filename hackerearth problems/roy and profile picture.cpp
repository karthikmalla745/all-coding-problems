/*

input:
180
3
640 480
120 300
180 180

output:
CROP IT
UPLOAD ANOTHER
ACCEPTED

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int n;
    cin>>n;
    while(n--)
    {
        int w,h;
        cin>>w>>h;
        
        if(w<l || h<l)
        {
            cout<<"UPLOAD ANOTHER";
        }
         else if(w>=l && h>=l)
         {
             if(w==h)
             {
                 cout<<"ACCEPTED";
             }
            else
            {
                cout<<"CROP IT";
            }
         }
        cout<<endl;
    }
    return 0;
}