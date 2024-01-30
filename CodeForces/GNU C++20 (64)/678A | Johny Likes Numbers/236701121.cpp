#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.14159265358979323846
typedef long long ll;
typedef long double ld;
const ll N = 10e9 + 1;
//string pei = "3141592653589793238462643383279";
void tcase()
{
    int n, k;
    cin >> n >> k;
    if (n < k) cout << k;
    else if (n == k)cout << 2 * n;
    else cout << (k - n % k)+n;
}
int main()
{
    elkhawaga;
    ll t;
    t = 1;
    //cin >> t;
    while (t--) tcase();
    return 0;
}