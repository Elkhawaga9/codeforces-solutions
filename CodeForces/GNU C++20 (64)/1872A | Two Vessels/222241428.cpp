#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.second < b.second;
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
//int freq[100005];
void tcase()
{
    ld a, b, c,eq;
    cin >> a >> b >> c;
    if (a < b)swap(a, b);
    eq = (a + b / 2.0);
    ll ans = 0;
    while(a!=b)
    {
        a -= (min(c, a - b));
        b += (min(c, a - b));
        ans++;
    }
    cout << ans << "\n";
}                               
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
   // t = 1;
    for (int i = 0;i < t;i++) tcase();
}