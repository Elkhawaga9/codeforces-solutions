#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
void tcase()
{
    int n;cin >> n;
    vector<ll>vec(n), ans;
    for (int i = 0;i < n;i++)
    {
        cin >> vec[i];
    }
    ans.push_back(vec[0]);
    for (int i = 1;i < n;i++)
    {
        if (vec[i] < vec[i - 1])
        {
            ans.push_back(vec[i]);
        }
        ans.push_back(vec[i]);
    }
    cout << ans.size() << "\n";
    for (auto& it : ans) cout << it << " ";
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