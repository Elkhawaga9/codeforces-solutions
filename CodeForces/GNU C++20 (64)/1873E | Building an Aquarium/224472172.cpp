#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
int n, x;
bool ok(ll m,vector<ll>vec)
{
    ll summ = 0;
    for (int i = 0;i < n;i++)
    {
        if (vec[i] < m) summ += (m - vec[i]);
        else break;
    }
    return summ<=x;
}
 
 
void tcase()
{
    cin >> n >> x;
    vector<ll>vec(n);
    for (auto& i : vec)cin >> i;
    sort(vec.begin(), vec.end());
    ll l = 0, r = 1e10;
    ll ans = 0;
    while (l<=r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid,vec))
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
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}