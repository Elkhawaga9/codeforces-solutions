#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.141592653589793238462643383279
typedef long long ll;
typedef long double ld;
const ll N = 10e9 + 1;
string pei = "3141592653589793238462643383279";
 
void tcase()
{
    string word;cin >> word;
    ll l = word.length();
    int freq[50] = {0};
    for (int i = 1;i < l - 1;i++)
    {
        if(word[i]!=word[0]) freq[word[i] - 97]++;
    }
    for (auto i : freq)
    {
       // cout << i << " ";
        if (i >= 2)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while(t--) tcase();
    return 0;
}