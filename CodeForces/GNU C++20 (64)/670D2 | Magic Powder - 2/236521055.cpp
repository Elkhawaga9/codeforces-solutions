#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi pair<ll,ll>
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 1e6+5;
vector<pi>vec(N);
ll n, k;
bool ok(ll m)
{
    ll sum = 0;
    for (int i = 0;i < n;i++)
    {
        sum += max(0LL, (m * vec[i].second - vec[i].first));
        if (sum > k) return 0;
    }
    return 1;
}
void tcase()
{
    cin >> n >> k;
    vec.resize(n);
    for (int i = 0;i < n;i++)cin >> vec[i].second;
    for (int i = 0;i < n;i++)cin >> vec[i].first;
    //get minimum
    ll ans = INT_MAX;
    for (auto &i : vec)
    {
        ans = min(i.first / i.second, ans);
    }
   
    for (auto& i : vec)
    {
        i.first -= i.second * ans;
    }
    sort(vec.begin(), vec.end());
    //for (auto& i : vec)cout << i.first << " " << i.second << "\n";
    
    ll l = 0, r = 1e10;
    ll x = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid + 1;
            x = mid;
        }
        else r = mid - 1;
    }
    ans += x;
    cout << ans<<"\n";
}
 
int main()
{
    elkhawaga;
    ll t;
    t = 1;
    //cin >> t;
 
    while (t--)
    {
        tcase();
        cout<<"\n";
    }
 
    return 0;
}