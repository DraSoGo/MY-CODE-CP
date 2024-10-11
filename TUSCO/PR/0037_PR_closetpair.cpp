#include <bits/stdc++.h>
using namespace std;
struct Point 
{
    long long int x, y;
    Point() { }
    Point(long long int x, long long int y): x(x), y(y) { }
    long long int operator- (Point &lhs) const
    { 
        return (x-lhs.x) * (x-lhs.x) + (y-lhs.y) * (y-lhs.y);
    }
};
Point points[100001];
int n; 
long long int solve(int l, int r)
{
    if(l==r)
    {
        return INT_MAX;
    }
    int m = (l+r) >> 1;
    long long int min_dis = min(solve(l, m), solve(m+1, r));
    l = max(0, l-8);
    r = min(n-1, r+8);
    for(int i=l; i<=r; i++)
    {
        if(i!=m)
        {
            min_dis = min(min_dis, points[m] - points[i]);
        }
    }
    return min_dis;
    }

int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }
        sort(points, points+n, [&](Point a, Point b)
    {
        if(a.x == b.x) return a.y < b.y;
        return a.x < b.x;
    });
    cout << solve(0, n-1) << '\n';
    return 0;
}