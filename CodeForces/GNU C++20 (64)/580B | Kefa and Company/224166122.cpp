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
 
bool ok(ll m)
{
    return m;
}
 
 
void tcase()
{
    int n, d;
    cin >> n >> d;
    vector<pi>vec(n);
    for (pi& i : vec) cin >> i.first >> i.second;
    sort(vec.begin(), vec.end());
    int rp = 0;
    ll ans = 0;
    ll mxans = 0;
    for (int lp = 0;lp < n;lp++)
    {
        //cout << lp << "\n";
        while (rp < n&& vec[rp].first - vec[lp].first < d)
        {
            ans += vec[rp].second;
            rp++;
           
        }
        mxans = max(mxans, ans);
        ans -= vec[lp].second;
    }
    cout << mxans;
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