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
bool if_prime(string n)
{
    int num = stoi(n);
    for (int i = 2;i * i <= num;++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return 1;
}
 
void tcase()
{
    string num;cin >> num;
    string ans;
    for (int i = 0;i < 9;i++)
    {
        string ans;ans += num[i];
        for (int j = i + 1;j < 9;j++)
        {
            ans += num[j];
            if (if_prime(ans))
            {
                cout << ans << "\n";
                return;
            }
            else ans.pop_back();
        }
    }
    for (int i = 0;i < 9;i++)
    {
        string ans;ans += num[i];
        for (int j = i + 1;j < 9;j++)
        {
            ans += num[j];
            if (if_prime(ans))
            {
                cout << ans << "\n";
                return;
            }
        }
    }
    cout << "-1\n";
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}