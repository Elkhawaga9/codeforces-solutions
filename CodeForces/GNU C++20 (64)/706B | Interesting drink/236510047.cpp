#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    int a, b;
    cin >> a;
    vector<int>vec1(a);
    for (auto &i : vec1)cin >> i;
    sort(vec1.begin(), vec1.end());
    cin >> b;
    while(b--)
    {
        int i;cin >> i;
        auto it = upper_bound(vec1.begin(), vec1.end(), i);
        cout << it-vec1.begin() << "\n";
    }
    
}
 
int main()
{
    elkhawaga;
    ll t;
    t = 1;
    //cin >> t;
 
    while (t--)
    {
        tcase();
        cout<<"\n";
    }
 
    return 0;
}