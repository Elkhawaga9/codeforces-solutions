#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<string,int>
using namespace std;
const ll N = 1e9 + 1;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
 
bool ok(ll m)
{
 
    return 1;
}
vector<ll>getPowersOfTwo()
{
    vector<ll>vec;
    vec.push_back(0);
    for (ll i = 0;i < 63;i++)
    {
        vec.push_back(1LL << i);
    }
    return vec;
}
void tcase()
{
    int n,k;cin >> n>>k;
    map<int, int>m;
    while (n--)
    {
        ll temp;cin >> temp;
        m[temp % k]++;
    }
    ll ans = 0;
    for (auto& it : m)
    {
        if (it.first == 0|| it.first == k - it.first)
        {
            if (it.second & 1)ans += it.second - 1;
            else ans += it.second;
            m[it.first] = 0;
        }
        else
        {
            ans += 2LL * (min(m[it.first], m[k - it.first]));
            m[it.first] = 0;
            m[k - it.first] = 0;
        }
    }
    cout << ans;
}
 
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        //cout << "\n";
    }
}