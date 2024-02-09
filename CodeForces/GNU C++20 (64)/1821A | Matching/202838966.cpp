#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll t;cin >> t;
 while (t--)
 {
  string num; cin >> num;
  ll ans = 1;
  if (num[0] == '?') ans *= 9;
  for (int i = 1;i < num.length();i++)
  {
   if (num[i] == '?') ans *= 10;
  }
  if (num[0] == '0') cout << 0 << "\n";
  else cout << ans << "\n";
 }
}