#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ll,ll>
using namespace std;
const int N = 1e6 + 1;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
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
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
 
void tcase()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> freq(N,0);
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }
    vector<ll>ans;
    ans.push_back(0);
    if (freq[0] >= k)ans.push_back(freq[0]);
    for (int i = 1;i < N;i++)
    {
        freq[i] += freq[i - 1];
        if (freq[i] >= k)ans.push_back(i);
    }
    ans.push_back(INT_MAX);
    ll sz = ans.size();
    while (q--)
    {
        ll l, r;cin >> l >> r;
        ll left = lower_bound(ans.begin(), ans.end(), l) - ans.begin();
        ll right = upper_bound(ans.begin(), ans.end(), r) - ans.begin();
        //cout << left << " " << right << " " << right - left << "\n";
        cout << right - left << "\n";
    }
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
        cout << "\n";
    }
}