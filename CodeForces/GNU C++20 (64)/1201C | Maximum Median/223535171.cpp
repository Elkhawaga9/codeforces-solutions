#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
 
int n, k;
bool ok(vector<ll>v,ll m)
{
    ll summ = 0;
    for (int i = n / 2;i < n;i++)
    {
        if (v[i] <= m)summ += (m - v[i]);
    }
    return summ <= k;
}
void tcase()
{
   
    cin >> n >> k;
    vector<ll>vec(n);
    for (auto& i : vec)cin >> i;
    sort(vec.begin(), vec.end());
    ll ans = vec[(n / 2)];
    ll l = vec[(n / 2)], r = vec[(n / 2)] + k;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(vec,mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
        cout << "\n";
    }
}