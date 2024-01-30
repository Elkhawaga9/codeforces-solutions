#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<string,int>
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
    //ll ts, tf, t, n;
    //cin >> ts >> tf >> t >> n;
    //if (n == 0) {
    //    cout << ts;
    //    return;
    //}
    //vector<ll>vec(n);
    //for (int i = 0;i < n;i++)
    //{
    //    cin >> vec[i];
    //}
    //if (ts < vec[0])
    //{
    //    cout << ts;
    //    return;
    //}
    //if (ts + n * t < tf)
    //{
    //    cout << ts + n * t + 1;
    //    return;
    //}
    //ll ans = vec[0] - 1;
    //ll cnt = 1;
    //ll sum = ts;
    //ll tans = 1;
    //for (ll i = 0;i < n;i++)
    //{
    //    if (sum >= tf) break;
    //    if (vec[i + 1] - vec[i] == 1)
    //    {
    //        cnt++;
    //    }
    //    else
    //    {
    //        cnt = 1;
    //    }
 
    //    sum += t;
 
    //}
 
    int n;cin >> n;
    string word;cin >> word;
    vector<int>pr1(n), suf1(n);
    set<char>s;
    for (int i = 0;i < n;i++)
    {
        s.insert(word[i]);
        pr1[i] = s.size();
    }
    s.clear();
    for (int i = n-1;i >=0;i--)
    {
        s.insert(word[i]);
        suf1[i] = s.size();
    }
    int ans = 0;
    for (int i = 0;i < n-1;i++)
    {
        ans = max(ans, pr1[i] + suf1[i + 1]);
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