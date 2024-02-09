#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.14159265358979323846
typedef long long ll;
typedef long double ld;
const ll N = 10e9 + 1;
ll po[32];
string pei = "3141592653589793238462643383279";
string w = "codeforces";
void tcase()
{
    string s; cin >> s;
    ll ans = 0;
    for (ll i = 0;i < 10;i++)
    {
        if (s[i] != w[i]) ans++;
    }
    cout << ans << "\n";
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while(t--)
    tcase();
    return 0;
}