#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi pair<ll,ll>
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 1e6 + 5;
vector<ll>vec(N);
ll nb, nc, ns, pb, pc, ps, have;
ll bcount = 0, scount = 0, ccount = 0;
int ok(ll m)
{
    ll sum = 0;
    sum += max(0LL, m * bcount - nb)*pb;
    sum += max(0LL, m * ccount - nc)*pc;
    sum += max(0LL, m * scount - ns)*ps;
    if (sum <= have)return 1;
    else return 0;
}
void tcase()
{
    string word;cin >> word;
    for (auto& i : word)
    {
        if (i == 'B') bcount++;
        else if (i == 'S') scount++;
        else ccount++;
    }
 
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> have;
    ll l = 0, r = (ll)1e15+5;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << "\n";
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
        //cout << "\n";
    }
 
    return 0;
}