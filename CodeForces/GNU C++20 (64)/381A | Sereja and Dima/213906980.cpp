#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 int n, sere = 0, dima = 0;
 int arr[1001];
 cin >> n;
 for (int i = 0;i < n;i++)
 {
  cin >> arr[i];
 }
 int start = 0, end = n - 1,max,c=0;
 while (start<=end)
 {
  if (arr[start] > arr[end])
  {
   max = arr[start];
   start++;
  }
  else 
  {
   max = arr[end];
   end--;
  }
  if (c % 2 == 0) sere += max;
  else dima += max;
  c++;
 }
 cout << sere << " " << dima;
 return 0;
}