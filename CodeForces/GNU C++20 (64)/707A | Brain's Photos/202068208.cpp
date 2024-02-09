#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n, m;
 cin >> n >> m;
 for (int i = 0;i < n;i++)
 {
  for (int j = 0; j < m;j++)
  {
   char temp;cin >> temp;
   if (temp == 'C' || temp == 'M' || temp == 'Y')
   {
    cout << "#Color\n";
    return 0;
   }
  }
 }
 cout << "#Black&White\n";
}