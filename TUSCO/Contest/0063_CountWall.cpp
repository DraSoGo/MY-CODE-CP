#include <bits/stdc++.h>
using namespace std;

int co,m,n,T[601][601];
bool vis[601][601];
queue <pair<int,int>> Q;
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};

bool check(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == 0)
    {
        co++;
        return false;
    }
    return !vis[x][y];
    
}


int BFS(int x,int y)
{
    co = 0;
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        auto [x1,y1] = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1+dx[i];
            int y2 = y1+dy[i];
            if (check(x2,y2))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
            }
        }
    }
    return co;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    int ans = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (T[i][j] == 1 && vis[i][j] == 0)
            {
                ans += BFS(i,j);
            }
        }
    }
    cout << ans;
    
    return 0;
}