#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
    bool operator < (const Point & a)const
    {
        return y > a.y;
    }
};

priority_queue <Point> PQ;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        PQ.push({x,y});
    }
    while (!PQ.empty())
    {
        cout << PQ.top().x << " " << PQ.top().y << "\n";
        PQ.pop();
    }
    
    return 0;
}
/*
INPUT
3
1 2
2 4
3 1
OUTPUT
3 1
1 2
2 4
*/