#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi pair<ll,ll>
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
 
 
void tcase()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)cout << c;
    else if (a == c)cout << b;
    else cout << a;
}
 
int main()
{
    elkhawaga;
    ll t;
    t = 1;
    //cout << fixed << setprecision(8);
    cin >> t;
    while (t--)
    {
        tcase();
        cout << "\n";
    }
 
    return 0;
}