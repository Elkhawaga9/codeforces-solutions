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
void o()
{
    int n, q;
    cin >> n >> q;
    vector<ll>vec(n),freq(n+1,0);
    for (auto& i : vec)cin >> i;
    while (q--)
    {
        ll l, r;cin >> l >> r;
        freq[--l]++;
        freq[r]--;
    }
    for (ll i = 1;i < n;i++) freq[i] += freq[i - 1];
    sort(vec.begin(), vec.end(),greater<ll>());
    sort(freq.begin(), freq.end(), greater<ll>());
    ll sum = 0LL;
    for (ll i = 0;i < n;i++)
    {
        sum += freq[i] * vec[i];
    }
    cout << sum;
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
        o();
        //cout << "\n";
    }
}