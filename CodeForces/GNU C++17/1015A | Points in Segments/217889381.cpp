#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
    ll n,m,ans=0;cin >> n>>m;
    vector<bool>freq(m+1,0);
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        for (int i = l;i <= r;i++)
        {
            if (freq[i] == 0) freq[i] = 1;
        }
    }
    for (int i = 1;i <= m;i++)
    {
        if (freq[i] == 0) ans++;
    }
    cout << ans << "\n";
    for (int i = 1;i <= m;i++)
    {
        if (freq[i] == 0)cout << i << " ";
    }
}
int main()
{
    elkhawaga();
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
 
}