#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int i, j, w;
};

const int sz = 105;
int n, m;
int dx[6] = {-1, -1, 0, 0, 1, 1};
int dy[2][6] = {
    {0, 1, -1, 1, 0, 1},
    {-1, 0, -1, 1, -1, 0}};
int T[sz][sz];
bool vis[sz][sz][1005];

queue<pos> Q;

int BFS()
{
    while (!Q.empty())
    {
        auto [ii, jj, w] = Q.front();
        Q.pop();

        if (ii == (n - 1) / 2 && jj == m - 1)
        {
            return w;
        }

        for (int i = 0; i < 6; i++)
        {
            int ni = ii + dx[i];
            int nj = jj + dy[ii % 2][i];
            int nw = w + 1;

            if (ni >= 0 && nj >= 0 && ni < n && nj < m &&
                T[ni][nj] != 0 && nw % T[ni][nj] == 0 &&
                !vis[ni][nj][nw])
            {

                vis[ni][nj][nw] = true;
                Q.push({ni, nj, nw});
            }
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
        }
    }

    int mid = (n - 1) / 2;
    for (int d = -1; d <= 1; d++)
    {
        int i = mid + d;
        if (i >= 0 && i < n && T[i][0] == 1)
        {
            Q.push({i, 0, 1});
            vis[i][0][1] = true;
        }
    }

    cout << BFS();
    return 0;
}
