#include <bits/stdc++.h>
using namespace std;
int T[101][101], m, n, k;
bool vis[101][101][502];
int dx[3] = {0, 1, 1};
int dy[3] = {1, 0, 1};
struct Point
{
    int x;
    int y;
    int sc;
} P;
queue<Point> Q;

bool check(int x, int y, int sc)
{
    if (sc > k)
    {
        return false;
    }
    if (x < 0 || y < 0 || x > n - 1 || y > m - 1)
    {
        return false;
    }
    return !vis[x][y][sc];
}

void BFS(int x, int y, int sc)
{
    int ans = -1;
    Q.push({x, y, sc});
    while (!Q.empty())
    {
        auto [x1, y1, sc1] = Q.front();
        Q.pop();
        // cout << x1 << " " << y1 << " " << sc1 << "\n";
        if (x1 == n - 1 && y1 == m - 1)
        {
            ans = max(ans, sc1);
            continue;
        }
        for (int i = 0; i < 3; i++)
        {
            if (check(x1 + dx[i], y1 + dy[i], sc1 + T[x1 + dx[i]][y1 + dy[i]]))
            {
                vis[x1 + dx[i]][y1 + dy[i]][sc1 + T[x1 + dx[i]][y1 + dy[i]]] = true;
                // cout << x1+dx[i] << " " << y1+dy[i] << " " << sc1 << " " << T[x1+dx[i]][y1+dy[i]] << " " << sc1+T[x1+dx[i]][y1+dy[i]] << "\n";
                Q.push({x1 + dx[i], y1 + dy[i], sc1 + T[x1 + dx[i]][y1 + dy[i]]});
            }
        }
        // cout << "\n";
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> T[i][j];
            }
        }
        memset(vis, 0, sizeof(vis));
        BFS(0, 0, T[0][0]);
        while (!Q.empty())
        {
            Q.pop();
        }
    }
    return 0;
}