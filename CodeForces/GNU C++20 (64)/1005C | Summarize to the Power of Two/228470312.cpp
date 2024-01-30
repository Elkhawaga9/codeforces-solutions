#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ll,ll>
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
    vector<ll>v = getPowersOfTwo();
    //for (auto i : v)cout << i << " ";
    int n;cin >> n;
    vector<ll>vec;
    map<ll, int>m;
    for (int i = 0;i < n;i++)
    {
        int temp;cin >> temp;
        vec.push_back(temp);
        m[temp]++;
    }
    sort(vec.begin(), vec.end());
    ll ans = 0;
    for (auto& i : vec)
    {
        bool f = 0;
        for (int j = 0;j < 64;j++)
        {
            ll temp = v[j];
            if (binary_search(vec.begin(), vec.end(), temp - i))
            {
                if (!(i == temp - i && m[i] < 2))
                {
                    f = 1;
                   // cout << i << " " << temp << " ***\n";
                    break;
                }
            }
        }
        if (!f)ans++;
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
        cout << "\n";
    }
}