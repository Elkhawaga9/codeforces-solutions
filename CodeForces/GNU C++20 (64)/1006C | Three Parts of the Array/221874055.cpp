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
    int n;cin >> n;
    vector<ll>vec(n);
    int p1 = 0, p2 = n - 1;
    for (int i = 0;i < n;i++)  cin >> vec[i];
    ll s1 = 0, s2 = 0, ans = 0;
    while (p1 <= p2)
    {
        if (s1 < s2)
        {
            s1 += vec[p1];
            p1++;
            if (s1 == s2) ans = max(ans, s1);
        }
        else if (s1 > s2)
        {
            s2 += vec[p2];
            p2--;
            if (s1 == s2) ans = max(ans, s1);
        }
        else
        {
            ans = max(ans, s1);
            s1 += vec[p1];
            p1++;
 
        }
    }
    cout << ans << "\n";
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