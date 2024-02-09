#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
void tcase()
{
    int n;cin >> n;
    int temp;
    ll f = 0, s = 0;
    vector<ll>ff, ss;
    while (n--)
    {
        cin >> temp;
        if (temp > 0)
        {
            f += temp;
            ff.push_back(temp);
        }
        else
        {
            s += (-temp);
            ss.push_back(-temp);
        }
    }
    bool coin = 0;
    if (f > s)
    {
        cout << "first\n";
        return;
    }
    else if (f < s)
    {
        cout << "second\n";
        return;
    }
    else
    {
        for (int i = 0;i < min(ff.size(), ss.size());i++)
        {
            if (ff[i] > ss[i])
            {
                cout << "first\n";
                return;
            }
            else if (ss[i] > ff[i])
            {
                cout << "second\n";
                return;
            }
        }
    }
 
    if (temp > 0) cout << "first\n";
    else cout << "second\n";
 
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