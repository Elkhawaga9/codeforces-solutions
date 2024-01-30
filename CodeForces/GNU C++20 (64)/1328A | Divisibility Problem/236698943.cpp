#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.14159265358979323846
typedef long long ll;
typedef long double ld;
const ll N = 10e9 + 1;
ll po[32];
string pei = "3141592653589793238462643383279";
void tcase()
{
 
    long long a, b;
    cin >> a >> b;
    if (a == b || a % b == 0)cout << 0 << endl;
    else if (a < b)cout << b - a << endl;
    else cout << b - a % b << endl;
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)
        tcase();
    return 0;
}