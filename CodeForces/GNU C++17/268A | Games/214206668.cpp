#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 int n,result=0;
 cin >> n;
 int arrh[31], arrg[31];
 for (int i = 0;i < n;i++)
 {
  cin >> arrh[i] >> arrg[i];
 }
 for (int i = 0;i < n;i++)
 {
  for (int j = 0;j < n;j++)
  {
   if (arrh[i] == arrg[j]) result++;
  }
 }
 cout << result;
 return 0;
}