#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1[0] == s1[1] &&s1[1] == s1[2]&&s1[0]!='.') cout << s1[0] << "\n";
    else if (s2[0] == s2[1]&& s2[1] == s2[2] && s2[1] != '.') cout << s2[0] << "\n";
    else if (s3[0] == s3[1]&& s3[1] == s3[2] && s3[1] != '.') cout << s3[0] << "\n";
 
    else if (s1[0] == s2[0] && s2[0] == s3[0] && s2[0] != '.') cout << s1[0] << "\n";
    else if (s1[1] == s2[1] && s2[1] == s3[1] && s2[1] != '.') cout << s1[1] << "\n";
    else if (s1[2] == s2[2] && s2[2] == s3[2] && s2[2] != '.') cout << s1[2] << "\n";
    
    else if (s1[0] == s2[1] && s2[1] == s3[2] && s2[1] != '.') cout << s1[0] << "\n";
    else if (s1[2] == s2[1] && s2[1] == s3[0] && s2[1] != '.') cout << s1[2]<<"\n";
    else cout << "DRAW\n";
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}