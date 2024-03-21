#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};
int m,n;
char T[51][51];
bool vis[51][51];
queue <pair<int,int>> QD;
queue <pair<int,int>> QW;

bool check(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == 'X') 
    {
        return false;
    }
    return !vis[x][y];
}

bool checkk(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == 'X' || T[x][y] == 'D') 
    {
        return false;
    }
    return !vis[x][y];
}

void BFS(int x1,int y1,int x2,int y2)
{
    int lv = 1;
    QD.push({x1,y1});
    QW.push({x2,y2});
    vis[x1][y1] = 1;
    vis[x2][y2] = 1;
    while (!QD.empty())
    {
        int lvq = QD.size();
        int lvqw = QW.size();
        while (lvqw--)
        {
            auto[xw,yw] = QW.front();
            QW.pop();
            for (int i = 0; i < 4; i++)
            {
                int xw1 = xw + dx[i];
                int yw1 = yw + dy[i];
                if (checkk(xw1,yw1))
                {
                    QW.push({xw1,yw1});
                    vis[xw1][yw1] = 1;
                }
            }
        }
        while (lvq--)
        {
            auto[xd,yd] = QD.front();
            QD.pop();
            for (int i = 0; i < 4; i++)
            {
                int xd1 = xd + dx[i];
                int yd1 = yd + dy[i];
                if (check(xd1,yd1))
                {
                    QD.push({xd1,yd1});
                    vis[xd1][yd1] = 1;
                    if (T[xd1][yd1] == 'D')
                    {
                        cout << lv;
                        return;
                    }
                }
            }
        }
        lv++;
    }
    cout << "KAKTUS";
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    int x1,y1,x2,y2;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
            if (T[i][j] == 'S')
            {
                x1 = i,y1 = j;
            }
            else if (T[i][j] == '*')
            {
                x2 = i,y2 = j;
            }
        }
    }
    BFS(x1,y1,x2,y2);
    return 0;
}