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
 
    ll n;cin >> n;
    vector<int>vec;
    ll ans1 = 0, ans2 = 0;
    while (n--)
    {
        int temp;cin >> temp;
        if (temp == 0)
        {
            ans1++;
            continue;
        }
        ans2 = max(ans1, ans2);
        ans1 = 0;
    }
    cout << max(ans1, ans2) << "\n";
 
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)
        tcase();
    return 0;
}