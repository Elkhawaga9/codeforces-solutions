#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
vector<ll> getDivisors(ll n)
{
    vector<ll>vec;
    // Note that this loop runs till square root
    for (ll i = 1; i <= sqrtl(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
                vec.push_back(i);
 
            else // Otherwise print both
            {
                vec.push_back(i);
                vec.push_back( n / i);
            }
        }
    }
    return vec;
}
 
void tcase()
{
    ll n;cin >> n;
    vector<ll>vec1;
    vec1 = getDivisors(n);
    sort(vec1.begin(), vec1.end());
    if (vec1.size() >= 5)
    {
        for (int i = 1;i < vec1.size()-1;i++)
        {
            for (int j = i + 1;j < vec1.size() - 1;j++)
            {
                for (int k = j + 1;k < vec1.size() - 1;k++)
                {
                    //cout << vec1[i] << " " << vec1[j] << " " << vec1[k] << "\n";
                    if (vec1[i]*vec1[j]*vec1[k] == n)
                    {
                        cout << "YES\n";
                        cout << vec1[i] << " " << vec1[j] << " " << vec1[k] << "\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "NO\n";
}
int main()
{
    elkhawaga;
    cout << fixed << setprecision(10);
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}