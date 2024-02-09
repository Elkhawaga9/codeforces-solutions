#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
ll n, n_digits;
string s;
vector<ll>vec,v;
ll sum = 0;
set<ll>st;
void solve(int idx)
{
    // Base case
    if (idx > n_digits)
    {
        //for (auto it : v) cout << it;
        //cout << "\n";
        st.insert(sum);
        return;
    }
    // Transition
    
    //Do
    sum+=vec[idx];
    v.push_back(vec[idx]);
    //recurse
    solve(idx + 1);
    //undo
    sum -= vec[idx];
    v.pop_back();

    //leave
    solve(idx+1);
   
}

void tcase()
{
    cin >> n;
    if (n == 0)
    {
        cout << 0<<"\n";
        return;
    }
    n_digits = (int)log2(n);
    s=bitset<64>(n).to_string().substr(64-n_digits-1);
    for (int i = 0;i <= n_digits;i++)
    {
        if(s[i]=='1') vec.push_back(powl(2, n_digits - i));
    }
    n_digits = vec.size() - 1;
    //for (auto& i : vec)cout << i << " ";
    sort(vec.begin(), vec.end());
    solve(0);
    for (auto& i : st)cout << i << "\n";
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