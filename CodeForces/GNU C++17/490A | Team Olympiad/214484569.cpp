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
 int n;cin >> n;
 ll fr[4] = { 0 };
 vector<ll>vec1,vec2,vec3;
 for (int i = 1;i <= n;i++)
 {
  int temp;cin >> temp;
  fr[temp]++;
  if (temp == 1)vec1.push_back(i);
  else if (temp == 2)vec2.push_back(i);
  else vec3.push_back(i);
 }
 ll m= min(fr[1], min(fr[2], fr[3]));
 cout << m << "\n";
 for (int i = 0;i < m;i++)
 {
  cout << vec1[i] << " " << vec2[i] << " " << vec3[i]<<"\n";
 }
 return 0;
 
}