#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
 ll n1, n2, n3;
 cin >> n1 >> n2 >> n3;
 if (n1 + n2 >= 10 || n1 + n3 >= 10 || n2 + n3 >= 10) cout << "YES\n";
 else cout << "NO\n";
}
 
int main()
{
    elkhawaga;
 ll t;cin >> t;
 for (int i = 0;i < t;i++) tcase();
}