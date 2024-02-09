#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    ll n;cin >> n;
    
}
 
int main()
{
    elkhawaga;
    //ll t;cin >> t;
    //while (t--)tcase();
    string word;cin >> word;
    ll l = word.length();
    stack<char>s;
    for (char i:word)
    {
        if (s.empty() || i != s.top()) s.push(i);
        else s.pop();
    }
    string ans;
    while (s.size() != 0)
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}