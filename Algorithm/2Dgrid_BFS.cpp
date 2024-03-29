#include <bits/stdc++.h>
using namespace std;
int n,m,c = 0;
int G[1000][1000];
bool vis[1000][1000];
queue <pair<int,int>> q;

bool check(int x2,int y2)
{
    if (x2 < 0 || y2 < 0 || x2 > m-1 || y2 > n-1)
    {
        return false;
    }
    return !vis[x2][y2];
}

void BFS(int x1,int y1)
{
    pair <int,int> A[4] = {{-1,0},{1,0},{0,1},{0,-1}};
    int x2,y2;
    q.push({x1,y1});
    vis[x1][y1] = true;
    while (!q.empty())
    {
        x2 = q.front().first;
        y2 = q.front().second;
        cout << x2 << "," << y2 << " = " << G[x2][y2] << "\n"; 
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            if (check(x2 + A[i].first,y2 + A[i].second))
            {
                q.push({x2 + A[i].first,y2 + A[i].second});
                vis[x2 + A[i].first][y2 + A[i].second] = true;
            }
        }
    }
}

int main()
{
    bool vis[1000][1000];
    memset(vis,false,sizeof(vis));
    int x1,y1;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> G[i][j];
        }
    }
    BFS(0,0);
}