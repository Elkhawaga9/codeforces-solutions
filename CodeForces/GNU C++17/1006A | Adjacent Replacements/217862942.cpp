#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
    ll n;cin >> n;
    vector<ll>vec(n);
    for (auto& i : vec)
    {
        cin >> i;
        if (!(i & 1)) i--;
    }
    for (auto &i : vec) cout << i << " ";
}
int main()
{
    elkhawaga();
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
 
}