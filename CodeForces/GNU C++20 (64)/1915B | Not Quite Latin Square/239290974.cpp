#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi pair<ll,ll>
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
 
 
void tcase()
{
      
  char matr[3][3];
  for (int i = 0; i < 3; i++)
  {
   for (int j = 0; j < 3; j++)
   {
    cin >> matr[i][j];
   }
  }
  int sa = 0, sb = 0, sc = 0;
  for (int i = 0; i < 3; i++)
  {
   for (int j = 0; j < 3; j++)
   {
    if (matr[i][j] == 'A')
    {
     sa++;
    }
    else if (matr[i][j] == 'B')
    {
     sb++;
    }
    else if (matr[i][j] == 'C')
    {
     sc++;
    }
   }
  }
  if (sa < 3)
  {
   cout << "A" << endl;
  }
  else if (sb < 3)
  {
   cout << "B" << endl;
  }
  else if (sc < 3)
  {
   cout << "C" << endl;
  }
 
    }
 
 
int main()
{
    elkhawaga;
    ll t;
    t = 1;
    //cout << fixed << setprecision(8);
    cin >> t;
    while (t--)
    {
        tcase();
        cout << "\n";
    }
 
    return 0;
}