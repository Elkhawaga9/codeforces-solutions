#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
//vector<ll> getDivisors(int n)
//{
//    vector<ll>vec;
//    // Note that this loop runs till square root
//    for (int i = 1; i <= sqrt(n); i++)
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
    ll odd = 0, even = 0;
    ll sum = 0;
    for (int i = 0;i < n;i++)
    {
        int temp;cin >> temp;
        if (temp & 1) odd++;
        else even++;
        sum += temp;
    }
    if (sum & 1) cout << "YES\n";
    else
    {
        if (odd == 0 || even == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}
int main()
{
    elkhawaga;
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}