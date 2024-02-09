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
 int n,k;cin >> n>>k;
 string word;
 for (char i = 'a';i < char(k+97);i++)
 {
  word.push_back(i);
 }
 int i = 0;
 while (word.length() != n)
 {
  if (i == n) i = 0;
  word.push_back(word[i]);
  i++;
 }
 cout << word;
 return 0;
 
}