#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
    ll n, k,ans=0;
    cin >> n >> k;
    vector<ll>vec(n);
    for (int i = 0;i < n;i++) cin >> vec[i];
    for (int i = 0;i < n;i++)
    {
        if (vec[i] <= k)ans++;
        else break;
        if (i == n - 1)
        {
            cout << ans << "\n";
            return;
        }
    }
    for (int i = n - 1;i >= 0;i--)
    {
        if (vec[i] <= k)ans++;
        else break;
    }
    cout << ans << "\n";
}
int main()
{
    elkhawaga();
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
 
}