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
    int n, k;cin >> n >> k;
    vector<ll>vec(n+1);
    for (int i = 1;i <= n;i++) cin >> vec[i];
    sort(vec.begin()+1, vec.end());
    if (n == k)
    {
        cout << vec.back()<<"\n";
        return;
    }
    if (k == 0)
    {
        if (vec[1] == 1) cout << -1 << "\n";
        else cout << 1 << "\n";
        return;
    }
    if (vec[k] != vec[k + 1]) cout << vec[k] << "\n";
    else cout << -1 << "\n";
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