#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t; cin >> t;
 while (t--)
 {
  vector<string>v1;
  int n; cin >> n;
  string temp;
  for (int i = 0;i < 2 * n - 2;i++)
  {
   cin >> temp;
   if (temp.length() == n - 1) v1.push_back(temp);
  }
  reverse(v1[1].begin(), v1[1].end());
  if (v1[0] == v1[1]) cout << "YES\n";
  else cout << "NO\n";
 }
}
 