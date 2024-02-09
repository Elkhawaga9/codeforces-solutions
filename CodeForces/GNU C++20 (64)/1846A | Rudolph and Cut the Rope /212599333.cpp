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
    ll ans = 0;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b) ans++;
    }
    cout << ans<<"\n";
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}