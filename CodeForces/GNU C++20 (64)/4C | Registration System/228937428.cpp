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
    map<string, ll>m;
    for (int i = 0;i < n;i++)
    {
        string word;cin >> word;
        if (m.find(word) == m.end())
        {
            m[word] = 0;
            cout << "OK\n";
        }
        else
        {
            m[word]++;
            cout << word << m[word]<<"\n";
        }
    }
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}