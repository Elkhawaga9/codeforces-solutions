#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.14159265358979323846
typedef long long ll;
typedef long double ld;
const ll N = 10e6 + 1;
 
int main() {
    elkhawaga;
    ll n, m; cin >> n >> m;
    ll s = n * (n + 1) / 2;
    ll dif = m % s;
    for (ll i = 1;i <= n;i++)
    {
        if (dif < i)
        {
            cout << dif << "\n";
            break;
        }
        dif -= i;
    }
    return 0;
}