#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int x,y;
};

int n,sx,sy,mx = -6;
int T[100][100];
bool vis[100][100];
queue <pos> Q;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

bool check(int x,int y)
{
    if (x > n-1 || y > n-1 || x < 0 || y < 0 || T[x][y] == 100)
    {
        return 0;
    }
    return !vis[x][y];
}

void BFS(int sx,int sy)
{
    Q.push({sx,sy});
    while (!Q.empty())
    {
        auto [x,y] = Q.front();
        Q.pop();
        // cout << x << "," << y << " :" << T[x][y] << "\n";
        mx = max(mx,T[x][y]);
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (check(nx,ny) && T[nx][ny] > T[x][y])
            {
                vis[nx][ny] = 1;
                Q.push({nx,ny});
            }
        }
        
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> sx >> sy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    BFS(sy-1,sx-1);
    cout << mx;
    return 0;
}