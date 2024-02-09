#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    int row, column, x,sol;
    for (row = 1;row <= 5;row++)
    {
        for (column = 1;column <= 5;column++)
        {
            cin >> x;
            if (x == 1) sol = abs(3 - column) + abs(3- row);
        }
    }
    cout << sol;
    return 0;
}