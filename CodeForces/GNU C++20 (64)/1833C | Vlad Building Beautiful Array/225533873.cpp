#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ll,ll>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
void tcase()
{
    ll n;cin >> n;
    vector<ll>vec(n);
    for (auto& i : vec)cin >> i;
    ll min_el = *min_element(vec.begin(), vec.end());
    for (int i = 0;i < n;i++)
    {
        if (!(min_el & 1))
        {
            if (vec[i] & 1)
            {
                no;
                return;
            }
        }
    }
    yes;
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