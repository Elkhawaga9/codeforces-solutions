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
    int n, k;
    cin >> n >> k;
    vector<ll>a(n),h(n);
    for (auto &i : a)cin >> i;
    for (auto &i : h)cin >> i;
    ll s = 0,p = 0,div = 0;
    ll ans = INT_MIN;
    
    for (int i = 0;i < n;i++)
    {
        if (p < i)
        {
            p = i;
            s = 0;
        }
        while (p < n && (i==p||h[p-1] % h[p] == 0) && s + a[p] <= k )
        {
            //cout << a[p] << " ";
            s += a[p];
            p++;
        }
        ans = max(ans, p - i);
        s -= a[i];
    }
    cout << ans<<"\n";
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