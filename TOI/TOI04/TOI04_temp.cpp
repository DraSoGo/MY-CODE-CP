#include <bits/stdc++.h>
using namespace std;

int T[21][21];
bool vis[21][21];
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};
int n,ans;
queue <pair<int,int>> Q;

bool check(int x,int y,int a,int b)
{
    if (x < 0 || y < 0 || x > n-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == 100 || T[x][y] <= T[a][b])
    {
        return false;
    }
    return !vis[x][y];
}

void BFS(int x,int y)
{
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        auto [x1,y1] = Q.front();
        ans = max(ans,T[x1][y1]);
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1+dx[i];
            int y2 = y1+dy[i];
            if (check(x2,y2,x1,y1))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    int x,y;
    cin >> n >> x >> y;
    x--;
    y--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> T[i][j];
        }
    }
    ans = T[y][x];
    BFS(y,x);
    cout << ans;
}