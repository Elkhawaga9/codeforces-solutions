#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
 string s1, s2, s3, s4, s5, s6, s7, s8;
 cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
 ll idx;
 for (int i = 0;i < 8;i++)
 {
  if (s1[i] != '.' || s2[i] != '.' || s3[i] != '.' || s4[i] != '.' || s5[i] != '.' || s6[i] != '.' || s7[i] != '.' || s1[i] != '.' || s8[i] != '.')
   idx = i;
 }
 if (s1[idx] != '.')cout << s1[idx];
 if (s2[idx] != '.')cout << s2[idx];
 if (s3[idx] != '.')cout << s3[idx];
 if (s4[idx] != '.')cout << s4[idx];
 if (s5[idx] != '.')cout << s5[idx];
 if (s6[idx] != '.')cout << s6[idx];
 if (s7[idx] != '.')cout << s7[idx];
 if (s8[idx] != '.')cout << s8[idx];
 cout << "\n";
}
 
int main()
{
    elkhawaga;
 ll t;cin >> t;
 for (int i = 0;i < t;i++) tcase();
}