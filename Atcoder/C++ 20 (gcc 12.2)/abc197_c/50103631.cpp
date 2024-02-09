#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ld,ld>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}

ll n;
vector<int>arr;
vector<vector<int>>v;
ll ans = LLONG_MAX;
void F(ll st)
{
    if (st == n)
    {
        ll temp_xor = 0;
        for (auto& i : v)
        {
            ll temp_or = 0;
            for (auto& j : i)
            {
                temp_or |= j;
            }
            temp_xor ^= temp_or;
        }
        ans = min(ans, temp_xor);
        return;
    }

    for (int i = st;i < n;i++)
    {
        vector<int>vec;
        for (int j = st;j <= i;j++)
        {
            vec.push_back(arr[j]);
        }
        v.push_back(vec);
        F(i + 1);
        v.pop_back();
    }
}

void tcase()
{
    cin >> n;
    arr.resize(n);
    for (auto& i : arr) cin >> i;
    F(0);
    cout << ans;
}

int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    t = 1;
    //cin >> t;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }

}