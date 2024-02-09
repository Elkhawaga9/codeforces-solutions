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
 
bool ok(ll m)
{
    return m;
}
 
 
void tcase()
{
    //sliding window
    int n, t;
    cin >> n >> t;
    vector<ll>vec(n);
    for (auto &i : vec)cin >> i;
 
    int p = 0, ans = 0,s=0;
    for (int i = 0;i < n;i++)
    {
        while (p < n&&s + vec[p] <= t)
        {
            s += vec[p];
            p++;
        }
        ans = max(ans, p - i);
        s -= vec[i];
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