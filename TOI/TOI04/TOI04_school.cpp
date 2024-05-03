#include <bits/stdc++.h>
using namespace std;

struct PS
{
    int a,b,x,y,sz;
};

char A[501][501];
int T[501][501],QS[501][501];
bool vis[501][501];
int m,n;
queue <pair<int,int>> bfs;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

bool check(int x,int y)
{
    if (x <= 0 || y <= 0 || x > m || y > n)
    {
        return false;
    }
    return true;
}

bool checkbfs(int x,int y)
{
    if (x <= 0 || y <= 0 || x > m || y > n)
    {
        return false;
    }
    if (A[x][y] != 'P')
    {
        return false;
    }
    return !vis[x][y];
}

void BFS(int x,int y)
{
    bfs.push({x,y});
    vis[x][y] = 1;
    while (!bfs.empty())
    {
        auto [x1,y1] = bfs.front();
        bfs.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1+dx[i];
            int y2 = y1+dy[i];
            if (checkbfs(x2,y2))
            {
                bfs.push({x2,y2});
                vis[x2][y2] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,x,y,cal,st = 0;
    memset(QS,0,sizeof(QS));
    cin >> n >> m;
    queue <PS> Q;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 'T')
            {
                T[i][j] = 2;
            }
            else
            {
                T[i][j] = 1;
            }
            if (i == 1 && j == 1)
            {
                QS[i][j] = T[i][j];
            }
            else if (i == 1)
            {
                QS[i][j] = QS[i][j-1] + T[i][j];
            }
            else if (j == 1)
            {
                QS[i][j] = QS[i-1][j] + T[i][j];
            }
            else
            {
                QS[i][j] = T[i][j] + QS[i-1][j] + QS[i][j-1] - QS[i-1][j-1];
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a = i,b = j;
            for (int k = st; k <= max(m,n); k++)
            {
                x = i+k,y = j+k;
                if (check(x,y))
                {
                    cal = QS[x][y] + QS[a-1][b-1] - QS[x-k-1][y] - QS[x][y-k-1];
                    // cout << a << "," << b << " " << x << "," << y << " :" << k+1 << " = " << cal << "\n";
                    if (cal == (k+1)*(k+1))
                    {
                        int sz = k+1;
                        if (Q.empty())
                        {
                            Q.push({a,b,x,y,sz});
                            st = k;
                        }
                        else
                        {
                            if (sz > Q.front().sz)
                            {
                                while (!Q.empty())
                                {
                                    Q.pop();
                                }
                                Q.push({a,b,x,y,sz});
                                st = k;
                            }
                            else if (sz == Q.front().sz)
                            {
                                Q.push({a,b,x,y,sz});
                                st = k;
                            }
                        }
                    }
                }
            }
        }
    }
    int ans2 = 0,ans1,c = 0;
    if (Q.empty())
    {
        ans1 = 0;
    }
    else
    {
        ans1 = Q.front().sz*Q.front().sz;
    }
    while (!Q.empty())
    {
        memset(vis,0,sizeof(vis));
        int co = 0;
        auto [ii,jj,kk,ll,o] = Q.front();
        // cout << ii << "," << jj << "  " << kk << "," << ll << "  : " << o << "\n";
        for (int i = ii; i < ii+o; i++)
        {
            for (int j = jj; j < jj+o; j++)
            {
                if (A[i][j] == 'P' && vis[i][j] == 0)
                {
                    BFS(i,j);
                    co++;
                }
            }
        }
        if (c == 0)
        {
            ans2 = co;
        }
        else
        {
            ans2 = min(ans2,co);
        }
        Q.pop();
        c++;
    }
    cout << ans1 << " " << ans2;
    return 0;
}