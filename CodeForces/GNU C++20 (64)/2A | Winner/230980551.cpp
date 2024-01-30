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
    int n;cin >> n;
    map<string, int>m,ans;
    vector<pi>vec(n);
    for (int i = 0;i < n;i++)
    {
        cin >> vec[i].first >> vec[i].second;
        m[vec[i].first] += vec[i].second;
    }
    int val = INT_MIN;
    for (auto& i : m)val = max(val, i.second);
    for (int i = 0;i < n;i++)
    {
        if (m[vec[i].first] == val)
        {
            ans[vec[i].first] += vec[i].second;
            if (ans[vec[i].first] >= val)
            {
                cout << vec[i].first << "\n";
                break;
            }
        }
       
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
        //cout << "\n";
    }
}