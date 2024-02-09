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
    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll>>vec;
    for (int i = 0;i < m;i++)
    {
        ll a, b;
        cin >> a >> b;
        vec.push_back({ b,a });
    }
    sort(vec.begin(), vec.end(), greater<>());
    vec.push_back({ 0,0 });
    ll total = 0;
    ll i = 0;
    while(n>0)
    { 
        if (vec[i].second <= n&&i<m)
        {
            total += (vec[i].second * vec[i].first);
            n -= vec[i].second;
        }
        else
        {
            total += n * vec[i].first;
            n = 0;
        }
        i++;
    }
   // if (n < 0) total -= (vec[i - 1].second * vec[i - 1].first);
   // for (auto& i : vec) cout << i.second << " " << i.first<<" ";
    cout << total << "\n";
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}