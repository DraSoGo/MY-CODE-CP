#include <bits/stdc++.h>
using namespace std;
struct triangle
{
    int x;
    int y;
};

main()
{
    struct triangle a,b,c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    float d1 = sqrt((pow(a.x - b.x,2)) - (pow(a.y - b.y,2)));
    float d2 = sqrt((pow(a.x - c.x,2)) - (pow(a.y - c.y,2)));
    float d3 = sqrt((pow(c.x - b.x,2)) - (pow(c.y - b.y,2)));
    if (d1 == d2 && d1 == d3 && d2 == d3)
    {
        cout << "equilateral triangle";
    }
    else if (d1 == d2 || d1 == d3 || d2 == d3)
    {
        cout << "isosceles triangle";
    }
    else
    {
        cout << "scalene triangle";
    }
}