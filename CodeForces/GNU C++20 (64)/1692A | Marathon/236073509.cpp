#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n;
 cin >> n;
 int arr1[4];
 for (int i = 0;i < n;i++)
 {
  for (int j = 0;j < 4;j++)
  {
   cin >> arr1[j];
  }
  int a = arr1[0];
  sort(arr1, arr1 + 4);
  if (a == arr1[0]) cout << 3<<"\n";
  else if (a == arr1[1]) cout << 2 << "\n";
  else if (a == arr1[2]) cout << 1 << "\n";
  else cout << 0 << "\n";
 }
 return 0;
}
 
 