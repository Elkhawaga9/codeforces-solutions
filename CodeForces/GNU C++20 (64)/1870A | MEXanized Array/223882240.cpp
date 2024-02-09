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
    int n, mex, s;
    cin >> n >> mex >> s;
    ll ans = 0;
    if (mex > n||(mex>s+1))cout << -1;
    else
    {
        for (int i = 0;i < mex;i++) ans += i;
        for (int i = mex + 1;i <= n;i++)
        {
            if (s == mex)ans += s - 1;
            else ans += s;
        }
        cout << ans;
    }
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