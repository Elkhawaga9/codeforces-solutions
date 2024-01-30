#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
ll getsumofsplitters(ll n)
{
    return n * (n - 1) / 2 + 1;
}
 
ll getrangesum(ll l, ll r)
{
    return (r * (r + 1) / 2) - (l * (l - 1) / 2);
}
 
 
 
void tcase()
{
    ll n, k;cin >> n >> k;
    if (n == 1)
    {
        cout << 0;
        return;
    }
    if (n <= k)
    {
        cout << 1;
        return;
    }
    if (getsumofsplitters(k) < n) cout << -1;
    else if (getsumofsplitters(k) == n) cout << k - 1;
    else
    {
        ll l = 2, r = k;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (getrangesum(mid, k) -(k-mid) >= n)
            {
                ans = k - mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans;
    }
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    t = 1;
    //cin >> t;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}