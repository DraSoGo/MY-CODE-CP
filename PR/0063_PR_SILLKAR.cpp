#include <bits/stdc++.h>
using namespace std;
char G[1000][1000];
queue <pair<int,int>> q;
queue <pair<int,int>> w;
bool vis[1000][1000];
//bool visw[1000][1000];
int m,n,x3,y3;
int px[8] = {0,0,1,-1,1,-1,1,-1};
int py[8] = {1,-1,0,0,1,-1,-1,1};

bool check(int x2,int y2)
{
    if (x2 < 0 || y2 < 0 || x2 > m-1 || y2 > n-1 || G[x2][y2] == 'X')
    {
        return false;
    }
    return !vis[x2][y2];
}

void BFS(int x1,int y1)
{
    int x2,y2,x4,y4,lv = 0;
    vis[x1][y1] = true;
    q.push({x1,y1});
    w.push({x3,y3});
    while (!q.empty())
    {
        int lvq = q.size();
        int lvw = w.size();
        while (lvw--)
        {
            x4 = w.front().first;
            y4 = w.front().second;
            w.pop();
            //cout << lv << ": " << lvw << " " << x4 << "," << y4 << " = " << G[x4][y4] << "\n";
            for (int i = 0; i < 4; i++)
            {
                if (check(x4 + px[i],y4 + py[i]) == true && G[x4 + px[i]][y4 + py[i]] != 'D')
                {
                    w.push({x4 + px[i],y4 + py[i]});
                    vis[x4 + px[i]][y4 + py[i]] = true;
                }
            }
        }
        while (lvq--)
        {
            x2 = q.front().first;
            y2 = q.front().second;
            //cout << lv << ": " << lvq << " " << x2 << "," << y2 << " = " << G[x2][y2] << "\n";
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                if (check(x2 + px[i],y2 + py[i]))
                {
                    q.push({x2 + px[i],y2 + py[i]});
                    vis[x2 + px[i]][y2 + py[i]] = true;
                }
            }
            if (G[x2][y2] == 'D')
            {
                cout << lv;
                return;
            }
        }
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << vis[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n";
        lv++;
    }
    cout << "KAKTUS";
}

int main()
{
    memset(vis,false,sizeof(vis));
    int x1,y1;
    cin >> m >> n;
    string A[m];
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = A[i][j];
            if (G[i][j] == 'S')
            {
                x1 = i;
                y1 = j;
            }
            if (G[i][j] == '*')
            {
                x3 = i;
                y3 = j;
            }
        }
    }
    BFS(x1,y1);
    cout << "\n";
}