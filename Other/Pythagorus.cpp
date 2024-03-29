#include <bits/stdc++.h>
using namespace std;
struct point
{
    double x;
    double y;
}p;

int main()
{
    cin >> p.x >> p.y;
    cout << fixed << setprecision(6) << sqrt(pow(p.x,2) + pow(p.y,2));
}