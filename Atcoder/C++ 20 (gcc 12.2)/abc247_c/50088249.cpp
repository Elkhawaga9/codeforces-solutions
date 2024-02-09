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
void F(ll ele)
{
    //base case
    if (ele == 1)
    {
        v.push_back(1);
        return;
    }

    F(ele - 1);
    v.push_back(ele);
    F(ele - 1);

}

void tcase()
{
    cin >> n;
    F(n);
    for (auto& i : v)
    {
        cout << i << " ";
    }
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