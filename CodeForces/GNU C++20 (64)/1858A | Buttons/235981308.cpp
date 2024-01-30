#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    if (c & 1)
    {
        if (a >= b)
            cout << "First";
        else
            cout << "Second";
    }
    else
    {
        if (b>=a)
            cout << "Second";
        else
            cout << "First";
    }
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)
    {
        tcase();
        cout<<"\n";
    }
 
    return 0;
}