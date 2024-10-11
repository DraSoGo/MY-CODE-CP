#include <bits/stdc++.h>
using namespace std;
int n,m;
char G[1000][1000];
queue <pair<int,int>> q;
bool vis[1000][1000];
int px[4] = {0,0,1,-1};
int py[4] = {1,-1,0,0};

bool check(int x2,int y2)
{
    if (x2 > m-1 || y2 > n-1 || x2 < 0 || y2 < 0 || G[x2][y2] == '#')
    {
        return false;
    }
    return !vis[x2][y2];
}

void BFS(int x1,int y1)
{
    int lv = 0;
    int x2,y2;
    vis[x1][y1] = true;
    q.push({x1,y1});
    while (!q.empty())
    {
        int lvq = q.size();
        //cout << lv << ": " << lvq << " " << x2 << "," << y2 << " = " << G[x2][y2] << "\n";
        while (lvq--)
        {
            x2 = q.front().first;
            y2 = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                if (check(x2 + px[i],y2 + py[i]))
                {
                    q.push({x2 + px[i],y2 + py[i]});
                    vis[x2 + px[i]][y2 + py[i]] = true;
                }
            }
            if (G[x2][y2] == 'B')
            {
                cout << lv;
                return;
            }
        }
        lv ++;
    }
    cout << -1;
}

int main()
{
    int a,x1,y1;
    cin >> a;
    while (a--)
    {
        memset(vis,false,sizeof(vis));
        cin >> m >> n;
        string A[m];
        while (!q.empty())
        {
            q.pop();
        }
        
        for (int i = 0; i < m; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                G[i][j] = A[i][j];
                if (G[i][j] == 'A')
                {
                    x1 = i;
                    y1 = j;
                }
            }
        }
        //cout << x1 << " " << y1 << "\n";
        BFS(x1,y1);
        cout << "\n";
    }
    
}