#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int x,y;
};

const int sz = 2e2;
int n,m,sx,sy,ex,ey;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int T[sz][sz];
int S[sz][sz];
int E[sz][sz];

bool check(int x,int y)
{
    if (x < 0 || y < 0 || x > n-1 || y > m-1)
    {
        return 0;
    }
    return 1;
}

template <size_t R,size_t C>
void BFS(int stx,int sty,int (&A)[R][C])
{
    int co = 1;
    queue <pos> Q;
    int vis[sz][sz];
    memset(vis,0,sizeof(vis));
    Q.push({stx,sty});
    while (!Q.empty())
    {
        int lv = Q.size();
        while (lv--)
        {
            auto [x,y] = Q.front();
            Q.pop();
            // cout << "----\n";
            // cout << x << " " << y << "\n";
            if (vis[x][y])
            {
                continue;
            }
            vis[x][y] = 1;
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                // cout << nx << " " << ny << "\n";
                if (vis[nx][ny])
                {
                    continue;
                }
                if (check(nx,ny))
                {
                    if (T[nx][ny] == 0)
                    {
                        A[nx][ny] = co;
                        vis[nx][ny] = 1;
                        continue;
                    }
                    Q.push({nx,ny});
                    // vis[nx][ny] = 1;
                }
            }
        }
        co++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> sx >> sy >> ex >> ey;
    sx--;
    sy--;
    ex--;
    ey--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
            S[i][j] = T[i][j];
            E[i][j] = T[i][j];
            // cout << T[i][j] << " ";
        }
        // cout << "\n";
    }
    // cout << "\n";
    BFS(sx,sy,S);
    BFS(ex,ey,E);
    int anse = 0,anss = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (T[i][j] == 0 && S[i][j] != 0 && E[i][j] != 0)
            {
                anse++;
                anss = min(anss,S[i][j]+E[i][j]+1);
            }
        }
    }
    cout << anse << "\n" << anss;
    return 0;
}