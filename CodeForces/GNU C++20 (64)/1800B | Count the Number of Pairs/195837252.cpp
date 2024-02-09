#include "bits/stdc++.h"
using namespace std;
int freq[123] = {0};
void solve()
{
 string s;
 int ans = 0;
 int n, k;
 cin >> n >> k;
 cin >> s;
 for (int i : s) freq[i]++;
 for (int i = 65;i < 91;i++)
 {
  ans += min(freq[i], freq[i + 32]);
  if (k > 0)
  {
   ans += (max(freq[i], freq[i + 32]) - min(freq[i], freq[i + 32])) / 2;
   k -= (max(freq[i], freq[i + 32]) - min(freq[i], freq[i + 32])) / 2;
  }
 
 }
 if (k < 0) cout << ans + k<<"\n";
 else cout << ans<<"\n";
 //cout << ans<<"\n";
 for (int i = 0;i < 123;i++) freq[i] = 0;
}
int main()
{
 int t;
 cin >> t;
 while (t--) solve();
}
 
 
 