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
int n, s;
ll ans1 = 0,ans2 = LLONG_MAX;
vector<ll>vec;
bool ok(ll m)
{
    int t = 0;
    vector<ll>vec2;
    for (int i = 1;i <= n;i++) vec2.push_back(vec[i] + m * i);
    sort(vec2.begin(), vec2.end());
    ll t_ans2 =0;
    for (int i = 0;i < m;i++)
    {
        t_ans2 += vec2[i];
        if (t_ans2 > s) return 0;
    }
    ans2 = t_ans2;
    return 1;
}
 
void tcase()
{
    cin >> n >> s;
    vec.resize(n + 1);
    for (int i = 1;i <= n;i++)  cin >> vec[i];
 
    int l = 0, r = n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans1 = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans1 << " " << ans2<<"\n";
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