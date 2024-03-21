#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
char T[1001][1001];
queue <pair<int,int>> Q;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int m,n;

bool check(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return 0;
    }
    if (T[x][y] == '#')
    {
        return 0;
    }
    return !vis[x][y];
}

void BFS(int x,int y)
{
    int lv = 0;
    bool ch = 0;
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        int qlv = Q.size();
        for (int j = 0; j < qlv; j++)
        {
            auto [x1,y1] = Q.front();
            Q.pop();
            if (T[x1][y1] == 'B')
            {
                ch = 1;
                break;
            }
            for (int i = 0; i < 4; i++)
            {
                int x2 = x1 + dx[i];
                int y2 = y1 + dy[i];
                if (check(x2,y2))
                {
                    vis[x2][y2] = 1;
                    Q.push({x2,y2});
                }
            }
        }
        if (ch)
        {
            break;
        }
        lv++;
    }
    if (ch)
    {
        cout << lv;
    }
    else
    {
        cout << -1;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> T[i][j];
                if (T[i][j] == 'A')
                {
                    x = i;
                    y = j;
                }
            }
        }
        BFS(x,y);
        
    }
    return 0;
}