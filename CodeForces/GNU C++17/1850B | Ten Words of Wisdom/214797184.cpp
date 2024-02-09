#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
 ll n;cin >> n;
 ll ans =0;
 ll oldquality=0;
 for (ll i = 1;i <= n;i++)
 {
  ll word, quality;
  cin >> word >> quality;
  if (word <= 10)
  {
   if (quality > oldquality)
   {
    oldquality = quality;
    ans = i;
   }
  }
 }
 cout << ans << "\n";
}
 
int main()
{
    elkhawaga;
 ll t;cin >> t;
 for (int i = 0;i < t;i++) tcase();
}