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
 string word;cin >> word;
 int l = word.length();
 ll ans = min('a'-word[0]+26,word[0]-'a');
 //cout << ans << " ";
 for (int i = 1;i < word.length();i++)
 {
  if (word[i] - word[i - 1] < 0)
  {
   ans += min(word[i - 1] - word[i], word[i] - word[i - 1] + 26);
  }
  else
  {
   ans += min(word[i] - word[i - 1], word[i - 1] - word[i] + 26);
  }
 }
 cout << ans << "\n";
 return 0;
 
}