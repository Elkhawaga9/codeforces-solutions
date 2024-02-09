#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
//ll fr1[10] = { 0 }, fr2[10] = { 0 };
 
//ld area(ld b,ld h)
//{
//    return 0.5 * b * h;
//}
void tcase()
{
 
}
 
int main()
{
    elkhawaga;
  int n;
  cin >> n;
  int curoff = 0;
  int untreated = 0;
  for (int i = 0;i < n;i++) {
   int x;
   cin >> x;
   if (x > 0) {
    curoff += x;
 
   }
   else {
    if (curoff < 1) {
     ++untreated;
    }
    else {
     --curoff;
    }
   }
  }
  cout << untreated;
  return 0;
 
}