#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int n=s.length();
  int i;
  map<char,int> m;

  for(i=0;i<n;i++)
  {
    m[s[i]]++;
  }

  auto mchar='$';
  int mcount=0;

  for(auto it : m)
  {
    if(it.second>mcount)
    {
      mchar=it.first;
      mcount=it.second;
    }
    else if(it.second==mcount)
    {
      if(mchar>it.first)
      {
        mchar=it.first;
      mcount=it.second;
      }
    }
  }
  cout<<mchar<<" "<<mcount;
  cout<<endl;
  return 0;
}