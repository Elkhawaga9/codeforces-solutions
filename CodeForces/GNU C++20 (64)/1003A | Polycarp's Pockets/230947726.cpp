#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t;
 cin >> t;
 vector<int>vec(t);
 for (int i = 0;i < t;i++) cin >> vec[i];
 map<int, int> m;
 for (int i = 0;i < t;i++) m[vec[i]]++;
 int hi = 0;
 for (auto i : m)
 {
  if (i.second > hi) hi = i.second;
 }
 cout << hi;
}