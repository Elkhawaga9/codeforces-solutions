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
    int n, x,a,b;
    cin >> n >> x;
    bool f = 1;;
    while (n--)
    {
        cin >> a >> b;
        if (a + b == 7 || a + x == 7 || b + x == 7||a==x||b==x) f = 0;
    }
    if (f) yes;
    else no;
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