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
  ll n, k; cin >> n >> k;
  ll dif = n - k;
  if ((n - k)%2==0 ||n%k==0||n%2==0) cout << "YES\n";
  else cout << "NO\n";
 }
}