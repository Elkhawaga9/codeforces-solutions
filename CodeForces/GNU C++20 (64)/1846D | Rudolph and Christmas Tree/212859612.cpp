#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
 
ld area(ld b,ld h)
{
    return 0.5 * b * h;
}
void tcase()
{
    ld n, d, h;
    cin >> n >> d >> h;
    vector <ld> vec(n);
    for (int i = 0;i < n;i++) cin >> vec[i];
    ld ans = area(d, h), dif;
    for (int i = 1;i < n;i++)
    {
        ans += area(d, h);
        dif = vec[i] - vec[i - 1];
        if (dif < h)
        {
            ans -= area((d / h) * (h - dif), h - dif);
        }
    }
    cout << fixed << setprecision(13) << ans << "\n";
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}