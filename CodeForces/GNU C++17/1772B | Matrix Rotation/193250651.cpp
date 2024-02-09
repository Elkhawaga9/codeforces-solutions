#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
 
while(t--)
{
 int r1c1,r1c2,r2c1,r2c2,temp1,temp2;
 cin>>r1c1>>r1c2>>r2c1>>r2c2;
 bool flag = false;
 for (int i =0;i<4;i++)
 {
 temp1 = r1c2;
 temp2 = r2c2;
     if(r1c1<r1c2&&r2c1<r2c2&&r1c1<r2c1&&r1c2<r2c2)
     {
         flag = true;
         break;
     }
     else
     {
        r1c2 = r1c1;
        r2c2 = temp1;
        r1c1 = r2c1;
        r2c1 = temp2;
     }
 }
 if (flag) cout<<"YES\n";
 else cout<<"NO\n";
 
}
return 0;
}