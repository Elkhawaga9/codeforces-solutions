#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(string &a,string &b)
{
    return  a.length() < b.length();
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
//bool if_prime(string n)
//{
//    int num = stoi(n);
//    for (int i = 2;i * i <= num;++i) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return 1;
//}
//vector<string>vec;
void tcase()
{
    int n,k,m;
    cin >> n>>k>>m;
    vector<string>vec1(n);
    map<string, ll>mp;
    for (auto& i : vec1)cin >> i;
    for (int i = 0;i < n;i++)
    {
        //cout << "ddd";
        ll c;cin >> c;
        mp[vec1[i]] = c;
    }
    for (int i = 0;i < k;i++)
    {
        ll x;cin >> x;
        vector<ll>idx(x);
        ll min_cost = INT_MAX;
        for (auto &j:idx)
        {
            cin >> j;
            min_cost = min(min_cost, mp[vec1[j - 1]]);
        }
        for (auto& s : idx)
        {
            mp[vec1[s - 1]] = min_cost;
        }
    }
    ll ans = 0;
    string temp;
    for (int i = 0;i < m;i++)
    {
        cin >> temp;
        ans += mp[temp];
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
    for (int i = 0;i < t;i++) tcase();
}