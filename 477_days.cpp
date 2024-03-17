#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y,d,m,d0,y1,sum = 0,m1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string A[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturay"};
    cin >> d >> m >> y;
    y1 = y-1;
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
    {
        m1[2] = 29;
    }
    for (int i = 1; i < m; i++)
    {
        sum += m1[i];
    }
   sum += y1 + (y1/4) - (y1/100) + (y1/400) + d;
   cout << A[sum%7];
    return 0;
}