#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ll,ll>
using namespace std;
const int N = 1e5 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
 
bool freq[N];
void tcase()
{
    int n;cin >> n;
    vector<ll>a(n),b(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
        freq[a[i]] = 1;
    }
    for (int i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    ll p = 0;
    for (auto &i:a)
    {
       // cout << i << " " <<freq[i]<< "\n";
        if (freq[i] == 0)continue;
        else
        {
            for (ll j = p;j < n;j++)
            {
                if (i == b[j])
                {
                    p = j + 1;
                    break;
                }
                else
                {
                    ans++;
                    //cout << b[j] << " ";
                    freq[b[j]] = 0;
                }
            }
            //cout << "\n";
        }
    }
    cout << ans;
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
        cout << "\n";
    }
}