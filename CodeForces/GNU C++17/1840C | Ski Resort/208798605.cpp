#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
//const ll N = 10e9 + 1;
 
//ll f(ll n)
//{
//    if (n == 0) return 1;
//    if (m.find(n) != m.end()) return m[n] ;
//    else
//    {
//        f(n - 1);
//        s *= n;
//        m[n] = s;
//    }
//    return s;
//}
void tcase()
{
    ll n, k, q;cin >> n >> k >> q;
    vector<ll>vec;
    ll ans = 0;
    ll f = 0;
    for (int i = 0;i < n;i++)
    {
        ll tmp;cin >> tmp;
        if (tmp <= q) f++;
        else f = 0;
        if (f >= k) ans += f - k + 1;
    }
    cout << ans<<"\n";
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--) tcase();
    return 0;
}