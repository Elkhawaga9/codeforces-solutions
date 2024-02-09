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
    int n, k;cin >> n >> k;
    vector<ll>vec(n),pr(n);
    cin >> vec[0];
    pr[0] = vec[0];
    for (int i = 1;i < n;i++)
    {
        cin >> vec[i];
        pr[i] = pr[i - 1] + vec[i];
    }
    ll min_sum = pr[k-1];
    int idx = 0;
    //for(auto &i:pr) cout<<i<<" ";
    for (int i = k;i < n;i++)
    {
        if (pr[i] - pr[i - k] < min_sum)
        {
            min_sum = pr[i] - pr[i - k];
           // cout << i << " " << k<<"\n";
            idx = i - k + 1;
        }
    }
    cout << idx + 1<< "\n";
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