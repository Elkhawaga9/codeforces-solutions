#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
void tcase()
{
    int n;cin >> n;
    ll c = 1;
    ll max_c = 1;
    vector<ll>vec(n);
    for (int i = 0;i < n;i++) cin >> vec[i];
 
    for (int i = 1;i < n;i++)
    {
        if (vec[i] > vec[i - 1]) break;
        else c++;
    }
    max_c = max(max_c, c);
    c = 1;
    for (int i = n - 2;i >= 0;i--)
    {
        if (vec[i] > vec[i + 1]) break;
        else c++;
    }
    max_c = max(max_c, c);
 
    for (int i = 1;i < n-1;i++)
    {
        c  = 1;
        for (int j = i;j < n-1;j++)
        {
            if (vec[j] >= vec[j+1]) c++;
            else break;
        }
        for (int j = i;j >= 1;j--)
        {
            if (vec[j] > vec[j-1]) c++;
            else break;
        }
        max_c = max(c, max_c);
    }
    max_c = max(c, max_c);
    cout << max_c;
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}