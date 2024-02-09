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

ll n, m;
bool mark[200];
vector<int>v;
void F(ll idx)
{
    //base case
    if (v.size()==n)
    {
        for (auto& i : v)cout << i << " ";
        cout << "\n";

        return;
    }
    for (int i = idx;i <= m;i++)
    {
        if (mark[i])continue;

        mark[i] = 1;
        v.push_back(i);
        F(i + 1);
        mark[i] = 0;
        v.pop_back();
    }

}

void tcase()
{
    cin >> n >> m;
    F(1);
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