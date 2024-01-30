#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pi pair<int,int>
using namespace std;
//const ll N = 1e6 + 5;
//bool cmp(pair<int, int>& a, pair<int, int>& b)
//{
//    return a.first < b.first;
//}
//
//
//ll get_sum(ll n)
//{
//    return(n * (n + 1) / 2);
//}
//
//bool ok(ll m)
//{
//
//    return 1;
//}
//vector<ll>getPowersOfTwo()
//{
//    vector<ll>vec;
//    vec.push_back(0);
//    for (ll i = 0;i < 63;i++)
//    {
//        vec.push_back(1LL << i);
//    }
//    return vec;
//}
 
void tcase()
{
    int n, k;
    cin >> n >> k;
    vector<pi>vec(n);
    for (int i = 0;i < n;i++) cin >> vec[i].first;
    for (int i = 0;i < n;i++) cin >> vec[i].second;
    sort(vec.begin(), vec.end());
   // for (auto i : vec)cout << i.first << " " << i.second<<"\n";
    for (int i = 0;i < n;i++)
    {
        if (k < vec[i].first) break;
        else k += vec[i].second;
    }
    cout << k;
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