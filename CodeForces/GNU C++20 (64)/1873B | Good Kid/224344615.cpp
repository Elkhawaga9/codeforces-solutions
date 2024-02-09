#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
 
bool ok(ll m)
{
    return m;
}
 
 
void tcase()
{
    int n;cin >> n;
    int mini = INT_MAX;
    ll ans = 1;
    vector<ll>vec;
    for (int i = 0;i < n;i++)
    {
        int temp;cin >> temp;
        vec.push_back(temp);
        if (temp < mini)mini = temp;
    }
    bool f = 1;
    for (auto& i : vec)
    {
        if (i == mini && f)
        {
            ans *= (i + 1);
            f = 0;
        }
        else ans *= i;
    }
    cout << ans;
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}