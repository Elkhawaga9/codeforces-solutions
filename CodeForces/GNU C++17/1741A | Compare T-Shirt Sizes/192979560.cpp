#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  string s1,s2;
  cin>>s1>>s2;
  int ans1 = 1;
  int ans2 = 1;
  for(auto i:s1)
     {
         if(i=='X') ans1+=1;
         else if (i=='L') ans1*=2;
         else if (i=='S') ans1*=-2;
     }
     for(auto j:s2)
     {
         if(j=='X') ans2+=1;
         else if (j=='L') ans2*=2;
         else if (j=='S') ans2*=-2;
     }
     if (ans1<ans2) cout<<"<\n";
     else if (ans1>ans2) cout<<">\n";
     else cout<<"=\n";
 }
 
 return 0;
}