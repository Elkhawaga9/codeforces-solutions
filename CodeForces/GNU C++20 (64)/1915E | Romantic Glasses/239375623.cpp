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
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
bool ok(ll m)
{
    return m;
}
 
 
//void tcase()
//{
//    //sliding window
//    int n, t;
//    cin >> n >> t;
//    vector<ll>vec(n);
//    for (auto& i : vec)cin >> i;
//
//    int p = 0, s = 0;
//    for (int i = 0;i < n;i++)
//    {
//        while (p < n && s + vec[p] <= t)
//        {
//            s += vec[p];
//            p++;
//        }
//        s -= vec[i];
//    }
//}
 
void tcase()
{
    int n;cin >> n;
    vector<ll>vec(n+1);
    for (int i = 1;i <= n;i++)
    {
        cin >> vec[i];
    }
    map<ll, ll>m;
    ll esum = 0, osum = 0;
    bool f = 0;
    for (ll i = 1;i <= n;i++)
    {
        if (i & 1) osum += vec[i];
        else esum += vec[i];
        ll dif = osum - esum;
        if (dif == 0 || m.find(dif) != m.end()) f = 1;
        m[dif] = i;
    }
    if (f)cout << "YES\n";
    else cout << "NO\n";
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