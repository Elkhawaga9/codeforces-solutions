#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
string s;
ll get_sum()
{
    ll total_sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        total_sum += (s[i] - '0');
    }
    return total_sum;
}
 
void tcase()
{
    ll n;cin >> n;
    vector<ll>vec(n);
    for (int i = 0;i < n;i++) cin >> vec[i];
    sort(vec.begin(), vec.end(), greater<ll>());
    for (auto& it : vec) cout << it << " ";
    cout << "\n";
}
int main()
{
    elkhawaga;
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}