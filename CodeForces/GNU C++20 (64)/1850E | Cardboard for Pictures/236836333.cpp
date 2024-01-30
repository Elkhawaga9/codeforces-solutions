#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi pair<ll,ll>
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 1e6 + 5;
vector<ll>vec(N);
ll n, k;
int ok(ll m)
{
    ll sum = 0;
    for (int i = 0;i < n;i++)
    {
        sum += (2 * m + vec[i]) * (2 * m + vec[i]);
        if (sum > k) return 2;
    }
    if (sum == k) return 1;
    else if (sum > k)return 2;
    else return 3;
}
void tcase()
{
    cin >> n >> k;
    vec.resize(n);
    for (int i = 0;i < n;i++)cin >> vec[i];
    ll l = 0, r = (ll)1e9;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid) == 1)
        {
            cout << mid << "\n";
            return;
        }
        else if (ok(mid) == 2) r = mid - 1;
        else l = mid + 1;
    }
}
 
int main()
{
    elkhawaga;
    ll t;
    t = 1;
    cin >> t;
 
    while (t--)
    {
        tcase();
        //cout << "\n";
    }
 
    return 0;
}