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
    int t;cin >> t;
    string word;cin >> word;
    map<string, ll>m;
    for (int i = 0;i < t-1;i++)
    {
        string temp;
        temp.push_back(word[i]);
        temp.push_back(word[i + 1]);
        if (m.find(temp) == m.end()) m[temp] = 1;
        else m[temp]++;
    }
    int max_v = 0;
    string max_w;
    for (auto& it : m)
    {
        if (it.second > max_v)
        {
            max_w = it.first;
            max_v = it.second;
        }
    }
    cout << max_w << "\n";
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}