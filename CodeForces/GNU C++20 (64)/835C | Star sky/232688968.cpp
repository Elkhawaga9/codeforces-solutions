#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pi pair<string,int>
using namespace std;
//const ll N = 1e6 + 5;
//bool cmp(pair<int, int>& a, pair<int, int>& b)
//{
//    return a.first < b.first;
//}
//
//
//ll get_sum(ll n)
//{
//    return(n * (n + 1) / 2);
//}
//
//bool ok(ll m)
//{
//
//    return 1;
//}
//vector<ll>getPowersOfTwo()
//{
//    vector<ll>vec;
//    vec.push_back(0);
//    for (ll i = 0;i < 63;i++)
//    {
//        vec.push_back(1LL << i);
//    }
//    return vec;
//}
 
int arr[105][105][12];
void tcase()
{
    int n, q,c;cin >> n >> q>>c;
 
    for (int i = 0;i < n;i++)
    {
        int x, y, b;
        cin >> x >> y >> b;
        arr[x][y][b]++;
    }
 
    for (int x = 1;x <= 100;x++)
    {
        for (int y = 1;y <= 100;y++)
        {
            for (int z = 0;z <= 10;z++)
            {
                arr[x][y][z] += arr[x][y - 1][z];
            }
        }
    }
 
 
 
    while (q--)
    {
 
        ll t,y1, x1, y2, x2,ans = 0;
        cin >> t>>x1 >> y1 >> x2 >> y2;
        for (int i = x1;i <= x2;i++)
        {
            for (int po = 0;po <= c;po++)
            {
                ans += (arr[i][y2][po] - arr[i][y1 - 1][po]) * ((t + po) % (c + 1));
            }
        }
        cout << ans << "\n";
    }
 
}
 
 
 
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        //cout << "\n";
    }
}