#include<bits/stdc++.h>
using namespace std;

void leftrotate(string &s,int k)
{
    rotate(s.begin(),s.begin()+k,s.end());
}

void rightrotate(string &s,int k)
{
    leftrotate(s,s.length()-k);
}

int main()
{
    string str;
    cin>>str;
    int k;
    cin>>k;

    leftrotate(str,k);
    cout<<str;
    cout<<endl;

    rightrotate(str,k);
    cout<<str;
    cout<<endl;

    return 0;
}