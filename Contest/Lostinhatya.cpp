#include <bits/stdc++.h>
using namespace std;

char T[1001][1001];
bool vis[1001][1001];
int mem[1001][1001];
queue <pair<int,int>> Q;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int m,n,k;

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
void BFS(int xs,int ys,int l)
{
    Q.push({xs,ys});
    vis[xs][ys] = 1;
    mem[xs][ys] = l;
    while (!Q.empty())
    {
        auto [x,y] = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x1 = x+dx[i];
            int y1 = y+dy[i];
            if (check(x1,y1))
            {
                Q.push({x1,y1});
                vis[x1][y1] = true;
                mem[x1][y1] = l;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    memset(mem,0,sizeof(mem));
    int xs,ys,xe,ye,l = 1;
    cin >> m >> n >> k;
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
            if (T[i][j] != '#' && mem[i][j] == 0)
            {
                BFS(i,j,l);
                l++;
            }
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mem[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    while (k--)
    {
        cin >> xs >> ys >> xe >> ye;
        xs--;
        ys--;
        xe--;
        ye--;
        if (mem[xe][ye] == mem[xs][ys] && mem[xe][ye] != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}