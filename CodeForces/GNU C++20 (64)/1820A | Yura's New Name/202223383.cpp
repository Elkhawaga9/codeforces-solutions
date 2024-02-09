#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;cin >> t;
 while (t--)
 {
  string w; cin >> w;
  int l = w.size();
  int l0 = l;
  int ans = 0;
  if (w[0] == '_')
  {
   w.insert(0, "^");
   l++;
  }
  if (w[l - 1] == '_')
  {
   w.insert(l , "^");
  }
  if (l == 1 && w[0] == '^')
  {
   w.insert(0, "^");
  }
  for (int i = 0;i < l-1;i++)
  {
   if (w[i] == '^' && w[i + 1] == '_' && w[i + 2] != '^')
   {
    w.insert(i + 2, "^");
    //ans++;
    i++;
    l++;
   }
 
  }
  //cout << w << "\n";
  cout << w.size() - l0<<"\n";
 }
 
 
}