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
bool ok(ll m)
{
    int s = 0;
    int i = 1;
    while (m)
    {
        k = pow(k, i);
        s += m;
        m /= k;
    }
    return s >= n;
}
void tcase()
{
    int n;cin >> n;
    vector<ll>vec(n);
    for (auto& i : vec)cin >> i;
    sort(vec.begin(), vec.end());
    int ans = 0,temp_ans=0;
    for (int i = 0;i < n;i++)
    {
        temp_ans = (lower_bound(vec.begin() + i, vec.end(),vec[i]+6)-vec.begin())-i;
        ans = max(ans, temp_ans);
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