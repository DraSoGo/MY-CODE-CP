#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x;
    int y;
    Point operator + (const Point & other)const
    {
        return {x + other.x,y + other.y};
    }
    bool operator == (const Point & other)const
    {
        return x == other.x && y == other.y;
    }
};

int main()
{
    Point p1 = {1,2};
    Point p2 = {2,2};
    cout << (p1+p2).x << " " << (p1+p2).y << "\n";
    if (p1 == p2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}