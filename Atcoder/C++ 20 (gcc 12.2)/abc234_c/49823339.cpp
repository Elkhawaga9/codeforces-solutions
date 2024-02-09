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
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
ll n;
vector<int>vec;

void solve(ll curr)
{
    //cout << curr << "\n";
    if ( curr == 0)
    {
        reverse(vec.begin(), vec.end());
        for (auto& i : vec) cout << i;
        return;
    }
    vec.push_back((curr % 2)*2);
    solve(curr/2);
}

void tcase()
{
    ll k; cin >> k;
    solve(k);
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