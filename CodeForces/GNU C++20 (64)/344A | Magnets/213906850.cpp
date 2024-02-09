#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 int n,counter=1,arr[100001];
 cin >> n;
 for (int i = 0;i < n;i++)
 {
  cin >> arr[i];
 }
 for (int j = 1;j < n;j++)
 {
  if (arr[j] == arr[j - 1]) continue;
  else counter += 1;
 }
 cout << counter;
 return 0;
}