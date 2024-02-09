#include <iostream>
#include"algorithm"
#include"string"
#include<vector>
using namespace std;
 
//FBFFBFFBFB
int main()
{
 int t;
 string fb;
 cin >> t;
 while (t--)
 {
  int k;
  cin >> k;
  string in;
  cin >> in;
  int i = 0;
  while(fb.size()<=17)
  {
   if (i % 3==0) fb += 'F';
   if (i % 5==0) fb += 'B';
   //if (fb.find(in))
   i++;
  }
  if (fb.find(in) != string::npos) cout << "YES\n";
  else
  {
   cout << "NO\n";
  }
 }
}