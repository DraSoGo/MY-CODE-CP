#include <bits/stdc++.h>
using namespace std;
int m,n,c;
int G[1000][1000];
bool vis[1000][1000];
queue <pair<int,int>> q;
pair <int,int> pos[8] = {{-2,-1},{-1,-2},{1,2},{2,1},{-2,1},{1,-2},{2,-1},{-1,2}};

bool check(int x2,int y2)
{
    if (x2 > m-1 || y2 > n-1 || x2 < 0 || y2 < 0)
    {
        return false;
    }
    return !vis[x2][y2];
}

int BFS(int x1,int y1)
{
    int x2,y2,co = 0,ch = 0;
    q.push({x1,y1});
    vis[x1][y1] = true;
    while (!q.empty())
    {
        int lv = q.size();
        co++;
        for (size_t i = 0; i < lv; i++)
        {
            x2 = q.front().first;
            y2 = q.front().second;
            //cout << x2 << "," << y2 << " = " << G[x2][y2] << "\n";
            q.pop();
            for (int i = 0; i < 8; i++)
            {
                if(check(x2 + pos[i].first,y2 + pos[i].second))
                {
                    q.push({x2 + pos[i].first,y2 + pos[i].second});
                    vis[x2 + pos[i].first][y2 + pos[i].second] = true;
                }
            }
            if (G[x2][y2] == c)
            {
                return co;
            }
        }
    }
}

int main()
{
    int x1,y1;
    c = 1;
    memset(vis,false,sizeof(vis));
    cin >> x1 >> y1 >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> G[i][j];
        }
    }
    cout << BFS(x1,y1);
}