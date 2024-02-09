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
 
ll n,p,ans = 0;
//vector<vector<int>>v;
//ll ans = LLONG_MAX;
vector<int>arr;
ll cnt = 0;
void F(ll idx,int g,int b,ll p)
{
    if (idx == n||(p<=arr[idx] && !g && !b))
    {
        ans = max(ans, idx);
        return;
    }
    if (p > arr[idx])
    {
        F(idx + 1, g, b, p + (arr[idx] / 2));
    }
    else
    {
        if (g)
        {
            F(idx, g - 1, b , 2 * p);
        }
        if (b)
        {
            F(idx, g, b - 1, 3 * p);
        }
    }
}
 
void tcase()
{
    cin >> n >> p;
    arr.resize(n);
    for (auto& i : arr)cin >> i;
    sort(arr.begin(), arr.end());
    F(0, 2, 1, p);
    cout << ans;
 
   /* for (int i=0;i<n;i++)
    {
        if (p > arr[i])
        {
            p += arr[i] / 2;
            ans++;
        }
        else if(blue||green)
        {
            if (green)
            {
                p *= 2;
                green--;
                i--;
            }
            else if (blue)
            {
                p *= 3;
                blue--;
                i--;
            }
 
        }
    }
    cout << ans;*/
}
 
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    t = 1;
    cin >> t;
    for (int i = 0;i < t;i++)
    {
        tcase();
        ans = 0;
        cout << "\n\n";
    }
 
}