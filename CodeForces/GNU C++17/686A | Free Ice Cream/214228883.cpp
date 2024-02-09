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
 int n, x;cin >> n >> x;
 ll found = x;
 ll distress = 0;
 for (int i = 0;i < n;i++)
 {
  char op;ll d;
  cin >> op >> d;
  if (op == '+') found += d;
  else
  {
   if (found >= d) found -= d;
   else distress++;
  }
 }
 cout << found << " " << distress;
 return 0;
 
}