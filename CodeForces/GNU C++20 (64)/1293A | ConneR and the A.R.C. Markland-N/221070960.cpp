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
    int n, s, k;
    cin >> n >> s >> k;
    map<ll, ll>m;
    for (int i = 1;i <= k;i++)
    {
        int temp;cin >> temp;
        m[temp] = 1;
    }
    ll front = 0,back = 0;
    for (int i = s;i >=1;i--)
    {
        if (m.find(i) == m.end())
        {
            break;
        }
        else
        {
            back++;
            if (i == 1) back = INT_MAX;
        }
    }
    for (int i = s;i <= n;i++)
    {
        if (m.find(i) == m.end())
        {
            break;
        }
        else
        {
            front++;
            if (i == n) front = INT_MAX;
        }
        if (front > back) break;
    }
    cout << min(front, back)<<"\n";
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