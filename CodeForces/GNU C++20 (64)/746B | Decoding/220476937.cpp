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
    string s;cin >> s;
    deque<char>deq;
    if (n & 1)
    {
        for (int i = 0;i < n;i++)
        {
            if (i & 1)deq.push_front(s[i]);
            else deq.push_back(s[i]);
        }
    }
    else
    {
        for (int i = 0;i < n;i++)
        {
            if (i & 1)deq.push_back(s[i]);
            else deq.push_front(s[i]);
        }
    }
    for (auto& it : deq) cout << it;
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}