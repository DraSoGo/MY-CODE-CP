#include <bits/stdc++.h>
using namespace std;

queue <pair<long long,long long>> Q;
long long fx[12] = {2,-2,1,-1,0,0,0,0,1,-1,1,-1};
long long fy[12] = {0,0,0,0,-2,1,-1,2,1,-1,-1,1};
// long long dx[8] = {1,-1,0,0,1,-1,1,-1};
// long long dy[8] = {0,0,1,-1,1,-1,-1,1};
long long dx[4] = {1,-1,0,0};
long long dy[4] = {0,0,1,-1};
bool vis[1001][1001];
char T[1001][1001];
long long m,n,mx = -1;

bool check(long long x,long long y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == '#')
    {
        return false;
    }
    return !vis[x][y];
}

void BFS(long long x,long long y)
{
    long long co = 0;
    Q.push({x,y});
    vis[x][y] = 1;
    //T[x][y] = '+';
    while (!Q.empty())
    {
        int x1 = Q.front().first;
        int y1 = Q.front().second;
        Q.pop();
        co++;
        for (long long i = 0; i < 4; i++)
        {
            long long x2 = x1+dx[i];
            long long y2 = y1+dy[i];
            if (check(x2,y2))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
                //T[x2][y2] = '+';
            }
        }
    }
    mx = max(mx,co);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    memset(vis,0,sizeof(vis));
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (T[i][j] == '#' && vis[i][j] == 0)
            {
                vis[i][j] = 1;
                for (long long k = 0; k < 12; k++)
                {
                    long long x2 = i+fx[k];
                    long long y2 = j+fy[k];
                    if (check(x2,y2))
                    {
                        T[x2][y2] = '#';
                        vis[x2][y2] = 1;
                    }
                }
            }
        }
    }
    memset(vis,0,sizeof(vis));
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (T[i][j] == '.' && vis[i][j] == 0)
            {
                BFS(i,j);
            }
        }
    }
    // for (long long i = 0; i < m; i++)
    // {
    //     for (long long j = 0; j < n; j++)
    //     {
    //         cout << T[i][j];
    //     }
    //     cout << "\n";
    // }
    cout << mx;
    return 0;
}