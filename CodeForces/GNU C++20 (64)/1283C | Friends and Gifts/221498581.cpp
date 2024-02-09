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
    int n;cin >> n;
    vector<int>vec1(n),solve;
    vector<int>ans;
    map<int, bool>m;
    for (int i = 0;i < n;i++)
    {
        cin >> vec1[i];
        m[vec1[i]] = 1;
    }
    for (int i=1;i<=n;i++)
    {
        if (m.find(i) == m.end()) solve.push_back(i);
    }
    reverse(solve.begin(), solve.end());
    int temp = 0;
    for (int i = 0;i < n;i++)
    {
        if (vec1[i] == 0)
        {
            ans.push_back(solve[temp]);
            temp++;
        }
        else  ans.push_back(vec1[i]);
    }
    for (int i = 0;i < n;i++)
    {
        if (vec1[i] == 0&&ans[i] == i + 1)
        {
            bool f = 0;
            for (int j = i + 1;j < n;j++)
            {
                if (vec1[j] == 0)
                {
                    f = 1;
                    swap(ans[i], ans[j]);
                    break;
                }
            }
            if (!f)
            {
                for (int j = i - 1;j >= 0;j--)
                {
                    if (vec1[j] == 0)
                    {
                        f = 1;
                        swap(ans[i], ans[j]);
                        break;
                    }
                }
            }
        }
    }
    for (auto& i : ans) cout << i << " ";
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