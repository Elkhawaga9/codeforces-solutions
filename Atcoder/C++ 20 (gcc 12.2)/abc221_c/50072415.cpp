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
string temp;
string s;
ll n;
ll ans = 0;
bool mark[200];
void F(ll sz)
{
    //base case
    if (sz == n)
    {

       // cout << s << " ";
        if (s[0] == '0') return;
        for (int i = 0;i<n-1;i++)
        {
            string s1 = s.substr(0, i + 1);
            string s2 = s.substr(i + 1);
            if (s1[0] == '0' || s2[0] == '0')break;
            ll n1 = stoll(s1);
            ll n2 = stoll(s2);
            ans = max(ans, n1 * n2);
        }
        return;
    }

    //generate permutations
    for (int i = 0;i < n;i++)
    {

        if (s[0] == '0') return;

        if (mark[i]) continue;

        mark[i] = 1;
        s += temp[i];
        F(sz + 1);
        mark[i] = 0;
        s.pop_back();
    }
}

void tcase()
{
    cin >> temp;
    n = temp.length();
    F(0);
    cout << ans;
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