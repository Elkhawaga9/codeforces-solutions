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

string w;
ll n = 0;
//bool mark[200];
//vector<string>v;
//vector<vector<string>>all;
ll ans = 0;
ll fin = 0;
void F(ll st)
{
    //base case
    if (st == n)
    {
        fin += ans;
        return;
    }
    
    for (int i = st;i < n;i++)
    {
        string temp = w.substr(st,i-st+1);
        
       // v.push_back(temp);
        ans += stoll(temp);
        F(i + 1);
        //v.pop_back();
        ans -= stoll(temp);
       
    }
    
}

void tcase()
{
    cin >> w;
    n =(int) w.size();
    F(0);
    cout << fin;
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