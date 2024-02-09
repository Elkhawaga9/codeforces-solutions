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
    ll a, b;
    cin >> a >> b;
    if (a > b)
    {
        if ((a - b) & 1) cout << 2 << "\n";
        else cout << 1 << "\n";
    }
    else if (a < b)
    {
        if ((b - a) & 1) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    else cout << 0<<"\n";
}
int main()
{
    elkhawaga;
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}