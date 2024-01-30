#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
const ll N = 1e4 + 5;
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
    int n; cin >> n;
    string s, t;cin >> s >> t;
    int idx = 0;
    int arr[N];
    for (int i = 0;i < n;i++)
    {
        if (s[i] != t[i])
        {
            arr[idx] = i;
            idx++;
        }
    }
    for (int i = 0;i < idx;i++)
    {
        for (int j = i + 1;j < idx;j++)
        {
            swap(s[arr[i]], t[arr[j]]);
            if (s == t)
            {
                cout << "YES\n";
                return;
            }
            swap(s[arr[i]], t[arr[j]]);
        }
    }
    cout << "NO\n";
}
int main()
{
    elkhawaga;
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}