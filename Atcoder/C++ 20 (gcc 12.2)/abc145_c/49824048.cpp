#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ld,ld>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
ll n;
vector<pi>a,v;
ld sum = 0,c = 0;
bool mark[N];
void solve(ll sz)
{

    if (sz == n)
    {
        /*for (auto& i : v) cout << i.first << " " << i.second << "->";
        cout << "\n";*/
        for (int i = 0;i < n-1;i++)
        {
            ld difx = (v[i].first - v[i + 1].first) * (v[i].first - v[i + 1].first);
            ld dify = (v[i].second - v[i + 1].second) * (v[i].second - v[i + 1].second);
            sum += sqrtl(difx + dify);
        }
        c++;
        return;
    }
    for (int i = 0;i < n;i++)
    {
        if (mark[i]) continue;
        mark[i] = 1;
        v.push_back(a[i]);

        solve(sz + 1);

        mark[i] = 0;
        v.pop_back();
    }
}

void tcase()
{
    cin >> n;
    a.resize(n);
    for (int i = 0;i < n;i++) cin >> a[i].first >> a[i].second;
    solve(0);
    cout << sum/ c;
}
int main()
{
    elkhawaga;
    cout << fixed << setprecision(10);
    ll t;
    t = 1;
    //cin >> t;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}