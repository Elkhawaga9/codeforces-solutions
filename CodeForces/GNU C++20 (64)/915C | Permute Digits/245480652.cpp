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
int freq[200];
vector<int>v;
string ans,final_ans;
string a, b;
void F(ll idx,bool great)
{
    if (idx == n)
    {
        final_ans = max(ans, final_ans);
        return;
    }
 
    if (great)
    {
        for (char i = '9';i >= '0';i--)
        {
            if (freq[i])
            {
                ans.push_back(i);
                freq[i]--;
                F(idx + 1,1);
                ans.pop_back();
                freq[i]++;
                break;
            }
        }
    }
    else
    {
        for (char i = b[idx];i >= '0';i--)
        {
            if (freq[i])
            {
                ans.push_back(i);
                freq[i]--;
                F(idx + 1, i<b[idx]);
                freq[i]++;
                ans.pop_back();
            }
        }
    }
 
}
 
void tcase()
{
    cin >> a >> b;
    for (auto& i : a) freq[i]++;
    n = a.length();
    if (n < b.length())
    {
        sort(a.begin(), a.end(), greater<char>());
        cout << a;
    }
    else
    {
        F(0,0);
        cout << final_ans;
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