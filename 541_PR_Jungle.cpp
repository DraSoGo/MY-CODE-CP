#include <bits/stdc++.h>
using namespace std;
int n;
char G[1000][1000];
bool vis[1000][1000];
int dirx[4] = {1,-1,0,0};
int diry[4] = {0,0,1,-1};
queue <pair<int,int>> q;

bool check(int x2,int y2)
{
    if (G[x2][y2] == 'T')
    {
        return false;
    }
    if (x2 > n-1 || y2 > n-1 || y2 < 0 || x2 < 0)
    {
        return false;
    }
    return !vis[x2][y2];
}

int BFS(int x1,int y1)
{
    int x2,y2,lv = 0;
    vis[x1][y1] = true;
    q.push({x1,y1});
    while (!q.empty())
    {
        int slv = q.size();
        while (slv--)
        {
            x2 = q.front().first;
            y2 = q.front().second;
            //cout << slv << " : " << x2 << "," << y2 << " " << G[x2][y2] << "\n";
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                if (check(x2 + dirx[i],y2 + diry[i]))
                {
                    q.push({x2 + dirx[i],y2 + diry[i]});
                    vis[x2 + dirx[i]][y2 + diry[i]] = true;
                }
            }
            if (G[x2][y2] == 'E')
            {
                //cout << lv << "\n";
                return lv;
            }
        }
        lv++;
        //cout << lv << "\n";
    }
}

int main()
{
    memset(vis,false,sizeof(vis));
    int x1,y1,ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> G[i][j];
            if(G[i][j] == 'S')
            {
                x1 = i;
                y1 = j;
            }
        }
    }
    ans = BFS(x1,y1);
    cout << ans;
}