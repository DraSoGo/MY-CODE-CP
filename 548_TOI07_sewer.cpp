#include <bits/stdc++.h>
using namespace std;
int m,n,ch = 0;
char G[1000][1000];
int vis[1000][1000];
queue <pair<int,int>> q;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

bool check(int x2,int y2,int gx,int gy,int i)
{
    //cout << x2 << " " << y2 << " " << gx << " " << gy << "\n";
    if (gx < 0 || gy < 0 || gx > m-1 || gy > n-1)
    {
        //cout << 2 << "\n";
        return false;
    }
    if(dx[i] == 1 && !(G[x2][y2] == 'D' || G[x2][y2] == 'B' ))
    {
        //cout << 3 << "\n";
        return false;
    }
    if(dx[i] == -1 && !(G[gx][gy] == 'D' || G[gx][gy] == 'B' ))
    {
        //cout << 4 << "\n";
        return false;
    }
    if(dy[i] == 1 && !(G[x2][y2] == 'R' || G[x2][y2] == 'B' ))
    {
        //cout << 5 << "\n";
        return false;
    }
    if(dy[i] == -1 && !(G[gx][gy] == 'R' || G[gx][gy] == 'B' ))
    {
        //cout << 6 << "\n";
        return false;
    }
    return true;
}

void BFS(int x1,int y1)
{
    int x2,y2,gx,gy,lvq,lv = 1;
    q.push({x1,y1});
    vis[x1][y1] = lv;
    while (!q.empty())
    {
        lvq = q.size();
        lv++;
        while (lvq--)
        {
            x2 = q.front().first;
            y2 = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                gx = x2 + dx[i];
                gy = y2 + dy[i];
                if (check(x2,y2,gx,gy,i) == true)
                {
                    if (vis[gx][gy] < lv)
                    {
                        continue;
                    }
                    // for (int j = 0; j < m; j++)
                    // {
                    //     for (int k = 0; k < n; k++)
                    //     {
                    //         cout << vis[j][k] << " ";
                    //     }
                    //     cout << "\n";
                    // }
                    // cout << "\n";
                    if (vis[gx][gy] == lv)
                    {
                        cout << lv << "\n" << gx+1 << " " << gy+1;
                        return;
                    }
                    //cout << "hi";
                    q.push({gx,gy});
                    vis[gx][gy] = lv;
                }
            }
        }
    }
}

int main()
{
    int inf = INT_MAX;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vis[i][j] = inf;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> G[i][j];
        }
    }
    BFS(0,0);
}