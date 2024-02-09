#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.14159265358979323846
typedef long long ll;
typedef long double ld;
const ll N = 10e9 + 1;
string pei = "3141592653589793238462643383279";
void tcase()
{
    ll n; cin >> n;
    ll ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX, ans4 = -1;
 
    for (ll i = 0;i < n;i++)
    {
        ll t; cin >> t;
        string temp; cin >> temp;
        if (temp == "01") ans1 = min(t, ans1);
        if (temp == "10") ans2 = min(t, ans2);
        if (temp == "11") ans3 = min(t, ans3);
    }
    if (ans1 != INT_MAX && ans2 != INT_MAX || ans3 != INT_MAX)
    {
        if (ans1 + ans2 >= ans3) cout << ans3 << "\n";
        else cout << ans1 + ans2 << "\n";
    }
    else cout << -1 << "\n";
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while(t--)
    tcase();
    return 0;
}