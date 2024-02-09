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
    ll c = 0;
    cin >> s;
    ll ans = 0;
    while (s.size() != 1)
    {
        c++;
        s = to_string(get_sum());
    }
    cout << c;
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}