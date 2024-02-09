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
    int n, m;
    cin >> n >> m;
    map<int, int>mp;
    vector<int>idx;
    int temp;
    for (int i = 1;i <= n;i++)
    {
        cin >> temp;
        mp[temp] = i;
    }
    for (auto& it : mp)idx.push_back(it.second);
    sort(idx.begin(), idx.end());
    while (m--)
    {
        int l;cin >> l;
        if (l <= idx[0])cout << idx.size()<<"\n";
        else cout << idx.size()-(lower_bound(idx.begin(), idx.end(), l) - idx.begin()) << "\n";
       
    }
 
}                               
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
   // cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}