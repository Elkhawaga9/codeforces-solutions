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
 
    int n; cin >> n;
    bool valid = true;
    vector<int> v(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i + 1]) valid = false;
    }
    if (valid) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)
        tcase();
    return 0;
}