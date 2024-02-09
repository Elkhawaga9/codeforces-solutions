#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return  a.second > b.second;
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
 
map<string, int>m;
void tcase()
{
    int n;cin >> n;
    //vector<string>vec; 
    for (int i = 1;i <= n;i++)
    {
        string temp;cin >> temp;
        m[temp] = i;
    }
    vector<pair<string, int>>vec;
    for (auto& it : m) vec.push_back(it);
    sort(vec.begin(), vec.end(), cmp);
    for (auto& it : vec) cout << it.first << "\n";
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