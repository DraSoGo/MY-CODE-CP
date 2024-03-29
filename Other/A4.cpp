#include <bits/stdc++.h>
using namespace std;

struct robot
{
    long long x;
    long long y;
    long long z;
}R;

queue <robot> Q;
long long m,n,k;
long long A[101][101];
bool vis[101][101][501];
long long dx[3] = {0,1,1};
long long dy[3] = {1,0,1};


bool check(long long x,long long y,long long z)
{
    if (z > k)
    {
        return false;
    }
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    return !vis[x][y][z];
}

void BFS(long long x,long long y,long long z)
{
    long long ans = -1;
    Q.push({x,y,z});
    while (!Q.empty())
    {
        auto [x1,y1,z1] = Q.front();
        //cout << x1 << " " << y1 << " " << z1 << "\n"; 
        Q.pop();
        if (x1 == m-1 && y1 == n-1)
        {
            ans = max(ans,z1);
        }
        for (long long i = 0; i < 3; i++)
        {
            long long x2 = x1+dx[i],y2 = y1+dy[i],z2 = z1 + A[x2][y2];
            if (check(x2,y2,z2))
            {
                Q.push({x2,y2,z2});
                vis[x2][y2][z2] = 1;
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        memset(vis,0,sizeof(vis));
        cin >> m >> n >> k;
        for (long long i = 0; i < m; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        BFS(0,0,A[0][0]);
    }
    return 0;
}