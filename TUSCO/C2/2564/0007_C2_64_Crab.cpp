#include <bits/stdc++.h>
using namespace std;

queue <pair<int,int>> Q;
int m,n,ch = 0,co = 0;
char T[31][31];
bool vis[31][31];
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};

bool check(int x,int y)
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

void BFS(int x,int y)
{
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        auto [x1,y1] = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1 + dx[i];
            int y2 = y1 + dy[i];
            if (check(x2,y2))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
                if (T[x2][y2] == '*')
                {
                    co++;
                }
                if (T[x2][y2] == 'H')
                {
                    ch = 1;
                }
                
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
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
            if (T[i][j] == 'C' && vis[i][j] == 0)
            {
                BFS(i,j);
            }
        }
    }
    if (ch == 1)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (T[i][j] == 'H' && vis[i][j] == 0)
                {
                    BFS(i,j);
                }
            }
        }
    }
    cout << co;
    return 0;
}