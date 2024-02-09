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
  ll n;cin >> n;
  ll arr[n];
  for (ll i = 0;i < n;i++) cin >> arr[i];
  sort(arr, arr + n);
  cout << max(arr[0] * arr[1], arr[n - 1] * arr[n - 2])<<"\n";
 }
 
}