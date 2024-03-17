#include <bits/stdc++.h>
using namespace std;
struct point
{
    double x;
    double y;
}p;

int main()
{
    point a[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    cout << fixed << setprecision(6) << sqrt(pow(a[0].x - a[1].x,2) + pow(a[0].y - a[1].y,2));
    
}