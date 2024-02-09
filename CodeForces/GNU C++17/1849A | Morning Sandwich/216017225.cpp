#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
    ll b, c, h;cin >> b >> c >> h;
    if (c + h >= b) cout << 2 * b - 1<<"\n";
    else cout << 2 * (c + h) + 1<<"\n";
}
int main()
{
    elkhawaga();
    ll t;cin >> t;
    for (int i = 0;i < t;i++) tcase();
 
}