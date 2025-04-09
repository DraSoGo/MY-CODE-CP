#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3+1;
int n,m,ans;
int di[4] = {0,0,1,-1};
int dj[4] = {1,-1,0,0};
char T[sz][sz];
queue <pair<int,int>> Q;

void BFS(int i,int j)
{
    Q.push({i,j});
    while (!Q.empty())
    {
        auto [ii,jj] = Q.front();
        Q.pop();
        if (T[ii][jj] == '#')
        {
            continue;
        }
        T[ii][jj] = '#';
        for (int k = 0; k < 4; k++)
        {
            int ni = ii + di[k];
            int nj = jj + dj[k];
            if (ni < 0 || nj < 0 || ni >= n || nj >= m)
            {
                continue;
            }
            Q.push({ni,nj});
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (T[i][j] != '#')
            {
                BFS(i,j);
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}