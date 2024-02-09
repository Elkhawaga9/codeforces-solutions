#include <iostream>
using namespace std;
 
int main() {
    int y, w, m;
    string prob[6] = { "1/1","5/6","2/3","1/2","1/3","1/6" };
    cin >> y >> w;
    m = max(y, w);
    cout << prob[m-1];
    return 0;
}