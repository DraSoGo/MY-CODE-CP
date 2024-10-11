#include <bits/stdc++.h>
using namespace std;

int T[100][100];
bool vis[100][100];
queue <pair<int,int>> Q;
int dx[8] = {0,0,1,-1,1,1,-1,-1};
int dy[8] = {1,-1,0,0,1,-1,-1,1};
int n;

bool check(int x,int y,int num)
{
    if (x < 0 || y < 0 || x > n-1 || y > n-1)
    {
        return false;
    }
    else if(T[x][y] != num)
    {
        return false;
    }
    return !vis[x][y];
}

bool BFS(int num)
{
    int co = 0;
    while (!Q.empty())
    {
        auto [x1,y1] = Q.front();
        co++;
        if (co > 3)
        {
            while (!Q.empty())
            {
                Q.pop();
            }
            return false;
        }
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1 + dx[i];
            int y2 = y1 + dy[i];
            if (check(x2,y2,num))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
            }
        }
    }
    return true;
}

bool pat(int x,int y)
{
    int x2,y2,x1,y1,num = T[x][y];
    x1 = x;
    y1 = y+1;
    if (check(x1,y1,num))
    {
        x2 = x+1;
        y2 = y;
        if (check(x2,y2,num))
        {
            Q.push({x,y});
            Q.push({x1,y1});
            Q.push({x2,y2});
            vis[x][y] = 1;
            vis[x1][y1] = 1;
            vis[x2][y2] = 1;
            return true;
        }
    }
    x1 = x+1;
    y1 = y-1;
    if (check(x1,y1,num))
    {
        x2 = x+1;
        y2 = y;
        if (check(x2,y2,num))
        {
            Q.push({x,y});
            Q.push({x1,y1});
            Q.push({x2,y2});
            vis[x][y] = 1;
            vis[x1][y1] = 1;
            vis[x2][y2] = 1;
            return true;
        }
    }
    x1 = x;
    y1 = y+1;
    if (check(x1,y1,num))
    {
        x2 = x+1;
        y2 = y+1;
        if (check(x2,y2,num))
        {
            Q.push({x,y});
            Q.push({x1,y1});
            Q.push({x2,y2});
            vis[x][y] = 1;
            vis[x1][y1] = 1;
            vis[x2][y2] = 1;
            return true;
        }
    }
    x1 = x+1;
    y1 = y;
    if (check(x1,y1,num))
    {
        x2 = x+1;
        y2 = y+1;
        if (check(x2,y2,num))
        {
            Q.push({x,y});
            Q.push({x1,y1});
            Q.push({x2,y2});
            vis[x][y] = 1;
            vis[x1][y1] = 1;
            vis[x2][y2] = 1;
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            memset(vis,0,sizeof(vis));
            if (pat(i,j) && BFS(T[i][j]))
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}