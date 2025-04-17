#include <bits/stdc++.h>
using namespace std;

const int sz = 2001;
bool vis[sz][sz];
int n,m,ans;
queue <pair<int,int>> Q;
int di[8] = {0,0,1,-1,1,-1,1,-1};
int dj[8] = {1,-1,0,0,-1,1,1,-1};

void BFS(int i,int j)
{
    Q.push({i,j});
    while (!Q.empty())
    {
        auto [ii,jj] = Q.front();
        Q.pop();
        if (!vis[ii][jj])
        {
            continue;
        }
        vis[ii][jj] = 0;
        for (int k = 0; k < 8; k++)
        {
            int ni = ii+di[k];
            int nj = jj+dj[k];
            if (ni >= 0 && nj >= 0 && ni < n && nj < m && vis[ni][nj] == 1)
            {
                Q.push({ni,nj});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            vis[i][j] = c-'0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j])
            {
                BFS(i,j);
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
