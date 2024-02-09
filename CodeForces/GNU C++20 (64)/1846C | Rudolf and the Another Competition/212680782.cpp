#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    ll n, m, h;
    cin >> n >> m >> h;
    vector<ll>ans;
    for (int i = 0;i < n;i++)
    {
        vector<ll>vec;
        for (int j = 0;j < m;j++)
        {
            ll tmp;cin >> tmp;
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end());
        ll s = 0;
        ll pen = 0;
        ll l = 0;
        for (ll k = 0;k < m;k++)
        {
            if (s < h && s + vec[k] <= h)
            {
                s += vec[k];
                l++;
                pen += s;
                
            }
        }
        ans.push_back(l);
        ans.push_back(pen);
    }
 
   // for (auto& i : ans) cout << i << " ";
 
    ll c = 1;
    for (int w = 2;w < 2 * n;w+=2)
    {
        if (ans[w] > ans[0])
        {
            c++;
        }
        else if (ans[w] == ans[0])
        {
            if (ans[w + 1] < ans[1]) c++;
        }
    }
    cout << c << "\n";
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}