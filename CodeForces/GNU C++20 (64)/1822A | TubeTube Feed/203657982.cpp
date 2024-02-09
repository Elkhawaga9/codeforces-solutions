#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll q;cin >> q;
 while (q--)
 {
  ll n, t;
  cin >> n >> t;
  ll a[200], b[200];
  //int step = 0;
  vector<int>vec;
  for (int i = 0;i < n;i++)
  {
   cin >> a[i];
  }
  for (int i = 0;i < n;i++)
  {
   cin >> b[i];
  }
  /*for (int i = 0;i < n;i++)
  {
   a[i] = a[i] + i;
  }*/
  for (int i = 0;i < n;i++)
  {
   a[i] = a[i] + i;
  }
  bool flag = 0;
  //for (int i = 0;i < n;i++) cout << a[i] << " ";
  for (int i = 0;i < n;i++)
  {
   if (a[i] <= t)
   {
    vec.push_back(b[i]);
    //cout << i + 1 << " ";
    flag = 1;
   }
  }
  //cout << "\n";
  int m;
  if (!flag) cout << -1;
  else
  {
   m = *max_element(vec.begin(), vec.end());
   //cout << m<<"\n";
   for (int i = 0;i < n;i++)
   {
    if (b[i] == m&&a[i]<=t)
    {
     cout << i + 1;
     break;
    }
   }
  }
  cout << "\n";
 }
 
}