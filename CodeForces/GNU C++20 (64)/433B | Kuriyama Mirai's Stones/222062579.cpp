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
//int freq[100005];
void tcase()
{
    int n;cin >> n;
    vector<int>vec(n+1),sorted(n+1);
    vector<ll>pr_sorted(n+1),pr_vec(n+1);
    for (int i = 1;i <= n;i++)
    {
        cin >> vec[i];
        sorted[i] = vec[i];
    }
    sort(sorted.begin(), sorted.end());
    pr_sorted[0] = 0;
    pr_vec[0] = 0;
    for (int i = 1;i <= n;i++)
    {
        pr_vec[i] = pr_vec[i - 1] + vec[i];
        pr_sorted[i] = pr_sorted[i - 1] + sorted[i];
    }
    int q;cin >> q;
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) cout << pr_vec[r] - pr_vec[l - 1]<<"\n";
        else cout << pr_sorted[r] - pr_sorted[l - 1]<<"\n";
    }
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