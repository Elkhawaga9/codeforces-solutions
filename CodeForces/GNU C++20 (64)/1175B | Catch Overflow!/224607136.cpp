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
    int l;cin >> l;
    stack<ll>s;
    s.push(1);
    ll ans = 0;
    ll lim = pow(2, 32);
    //cout << lim;
    while (l--)
    {
        string com;cin >> com;
        if (com == "for")
        {
            ll times;cin >> times;
            times *= s.top();
            s.push(min(times,lim));
        }
        else if (com == "add")
        {
            ans += s.top();
        }
        else
        {
            s.pop();
        }
        if (ans >= lim)
        {
            cout << "OVERFLOW!!!";
            return;
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
        //cout << "\n";
    }
}