#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int i,j,w;
};

const int sz = 1e2+5;
int n,m;
int dx[6] = {-1, -1, 0, 0, 1, 1};
int dy[2][6] = {{0, 1, -1, 1, 0, 1},{-1, 0, -1, 1, -1, 0}};
int T[sz][sz];
bool vis[sz][sz][1005];
queue <pos> Q;

int BFS()
{
    while (!Q.empty())
    {
        auto [ii,jj,w] = Q.front();
        // cout << ii << " " << jj << " = " << st << "\n";
        if (ii == (m-1)/2 && jj == n-1)
        {
            return w;
        }
        Q.pop();
        for (int i = 0; i < 6; i++)
        {
            int ni = ii+dx[i];
            int nj = jj+dy[ii%2][i];
            int nw = w+1;
            if (ni < 0 || nj < 0 || ni >= m || nj >= n || vis[ni][nj][nw])
            {
                continue;
            }
            if (T[ni][nj] == 0 || nw % T[ni][nj] != 0)
            {
                continue;
            }
            vis[ni][nj][nw] = 1;
            Q.push({ni,nj,nw});
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
            if (T[i][j] == 1 && j == 0 && (i == (m-1)/2 || i == (m-1)/2-1 || i == (m-1)/2+1))
            {
                vis[i][j][1] = 1;
                Q.push({i,j,1});
            }
        }
    }
    cout << BFS();
    return 0;
}