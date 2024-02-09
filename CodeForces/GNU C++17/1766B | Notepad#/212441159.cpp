#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    ll n; cin >> n;
    string w;cin >> w;
    for (int j = 0;j < n-1;j++)
    {
        string temp = w.substr(j, 2);
        //cout << temp << " ";
        for (int i = j+2;i < n - 1;i++)
        {
            if (temp == w.substr(i, 2))
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}