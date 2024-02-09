#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  int vec[n];
  for (int i = 0;i < n;i++)
  {
   cin >> vec[i];
  }
  map <int, int> m;
  for (int j = 0;j<n;j++)
  {
   if (m.find(vec[j]) == m.end())
    m[vec[j]] = 1;
   else m[vec[j]]++;
  }
  int flag = 0;
  for (auto& it : m)
  {
   if (it.second >= 3)
   {
    cout << it.first<<"\n";
    flag=0;
    break;
   }
   else flag ++;
 
  }
  if (flag>0) cout<<"-1\n";
 }
 return 0;
}