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
    int n;cin >> n;
    vector<ll>vec(n+1);
    for (int i = 1;i <= n;i++)cin >> vec[i];
    sort(vec.begin()+1, vec.end(),greater<ll>());
    for (ll i = 1;i <= n;i++)
    {
        if (i == vec[i])
        {
            cout << i << "\n";
            return;
        }
        else if (i > vec[i])
        {
            cout << i - 1 << "\n";
            return;
        }
    }
    
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