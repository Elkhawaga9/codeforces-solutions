#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
const ll N = 1e9 + 1;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
 
bool ok(ll m)
{
 
    return 1;
}
vector<ll>getPowersOfTwo()
{
    vector<ll>vec;
    vec.push_back(0);
    for (ll i = 0;i < 63;i++)
    {
        vec.push_back(1LL << i);
    }
    return vec;
}
void tcase()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int allowed = 3;
    int mi = min({ a,b,c });
    bool f = 1;
    int op = 0;
    while (a > mi)
    {
        a -= mi;
        op++;
        if (op > 3)break;
    }
    if (op > 3) f = 0;
    while (b > mi)
    {
        b -= mi;
        op++;
        if (op > 3)break;
    }
    if (op > 3) f = 0;
    while (c > mi)
    {
        c -= mi;
        op++;
        if (op > 3)break;
    }
    if (op > 3) f = 0;
    if (f && a == b && a == c)yes;
    else no;
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
        //cout << "\n";
    }
}