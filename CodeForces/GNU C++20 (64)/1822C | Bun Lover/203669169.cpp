#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr);
typedef long long ll;
ll s(ll n)
{
    return n * (n + 1) / 2;
}
int main() {
    elkhawaga
    int q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;
        ll ans = 4 * n + n - 1 + 2 * s(n - 2) + 1;
        cout << ans << "\n\n";
    }
    return 0;
}