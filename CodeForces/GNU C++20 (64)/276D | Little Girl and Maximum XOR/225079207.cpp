#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
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
 
 
 
void tcase()
{
    ll a, b;
    cin >> a >> b;
    int idx = -1;
    for (ll i = 0;i < 64;i++)
    {
        if (((1LL << i) & a) != ((1LL << i) & b)) idx = i;
    }
    cout << (1LL << (idx+1)) - 1;
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
   // cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}