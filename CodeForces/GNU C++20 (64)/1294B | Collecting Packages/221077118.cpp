#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
//vector<ll> getDivisors(ll n)
//{
//    vector<ll>vec;
//    // Note that this loop runs till square root
//    for (ll i = 1; i <= sqrtl(n); i++)
//    {
//        if (n % i == 0)
//        {
//            // If divisors are equal, print only one
//            if (n / i == i)
//                vec.push_back(i);
//
//            else // Otherwise print both
//            {
//                vec.push_back(i);
//                vec.push_back( n / i);
//            }
//        }
//    }
//    return vec;
//}
 
void tcase()
{
    int n;
    cin >> n;
    vector<pair<int, int>>vec;
    vec.push_back({ 0,0 });
    for (int i = 0;i < n;i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back({ a,b });
    }
    sort(vec.begin(), vec.end());
    for (int i = 1;i <=n;i++)
    {
        if ( vec[i].first != vec[i-1].first && vec[i].second < vec[i - 1].second)
        {
            cout << "NO\n";
            return;
        }
    }
    string ans;
    for (int i = 1;i <= n ;i++)
    {
        ll r = vec[i].first - vec[i - 1].first;
        while (r--) ans += 'R';
 
        ll u = vec[i].second - vec[i - 1].second;
        while (u--) ans += 'U';
    }
    cout << "YES\n";
    cout << ans << "\n";
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}