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
    int  x, y, n;
    cin >> x >> y >> n;
    vector<ll>vec(n);
    vec[0] = x;
    vec[n - 1] = y;
    ll c = 1;
    if (n*(n-1)/2 > y-x)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = n-2;i >0 ;i--)
    {
        vec[i] = vec[i + 1] - c;
        c++;
    }
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