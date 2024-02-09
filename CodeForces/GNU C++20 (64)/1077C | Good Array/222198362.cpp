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
    ll max_elm = INT_MIN;
    ll max_2 = INT_MIN;
    vector<int>vec(n);
    ll s = 0;
    for (int i = 0;i < n;i++)
    {
        cin >> vec[i];
        s += vec[i];
        if (vec[i] > max_elm)
        {
            max_2 = max_elm;
            max_elm = vec[i];
        }
        else if (vec[i] > max_2) max_2 = vec[i];
    }
    
    vector<int>ans;
    for (int i = 0;i < n;i++)
    {
        if (s - vec[i] == 2 * max_elm && vec[i] != max_elm)ans.push_back(i + 1);
        else if (vec[i] == max_elm && s - vec[i] == 2 * max_2) ans.push_back(i + 1);
    }
    //cout << c << "\n";
    cout << ans.size() << "\n";
    for (auto &i : ans) cout << i << " ";
    cout << "\n";
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