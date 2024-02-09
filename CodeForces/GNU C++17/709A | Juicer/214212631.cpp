#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 int n, b, d,counter=0,arr[100001];
 cin >> n >> b >> d;
 for (int i = 0;i < n;i++)
 {
  cin >> arr[i];
 }
 int sum = 0;
 for (int j=0;j<n;j++)
 {
  if (arr[j] <= b)
  {
   sum += arr[j];
   if (sum > d)
   {
    counter++;
    sum = 0;
   }
  }
 }
 cout << counter;
 return 0;
}
 