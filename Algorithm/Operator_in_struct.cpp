#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x;
    int y;
    int w;
    bool operator < (const point & b) const
    {
        return y < b.y;
    }
};


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    priority_queue <point> A;
    int n,a,b,c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        A.push({a,b,c});
    }
    while(!A.empty())
    {
        cout << A.top().x << " " << A.top().y << " " << A.top().w << "\n";
        A.pop();
    }
    return 0;
}