#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n;
 cin >> n;
 while (n--)
 {
  
  int t;
  cin >> t;
  string s;
  cin >> s;
  int start = 0;
  int end = t-1;
  //int sol=0;
  while (start <= end)
  {
   if ((s[start] == '0' && s[end] == '1') || (s[start] == '1' && s[end] == '0'))
   {
    //sol++;
    start++;
    end--;
   }
   else break;
  }
  cout << end-start+1<<"\n";
 
 }
 return 0;
}
 
 
 
 