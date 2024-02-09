#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    ll n, k; cin >> n >> k;
    map<ll, vector<ll>>fr;
    for (int i = 0;i < n;i++)
    {
        ll tmp;cin >> tmp;
        fr[tmp].push_back(i);
    }
    for (int i = 0;i < k;i++)
    {
        ll l, r;cin >> l >> r;
        if (fr[l].empty() || fr[r].empty()||fr[l][0]>fr[r].back())
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}