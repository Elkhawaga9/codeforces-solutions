#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
 int n, k;cin >> n >> k;
 vector<ll>vec(n);
 vector<ll>vec2;
 for (int i = 0;i < n;i++) cin >> vec[i];
 sort(vec.begin(), vec.end());
 int ans = 0;
 int tmpans = 1;
 for (int i = 1;i < n;i++)
 {
  if (vec[i] - vec[i - 1] <= k) tmpans++;
  else
  {
   ans = max(tmpans, ans);
   tmpans = 1;
  }
 }
 ans = max(ans, tmpans);
 cout << n-ans << "\n";
}
 
int main()
{
    elkhawaga;
 ll t;cin >> t;
 for (int i = 0;i < t;i++) tcase();
}