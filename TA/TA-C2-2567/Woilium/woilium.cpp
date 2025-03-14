#include <bits/stdc++.h>
using namespace std;
int m, n, o;
int T[101][101];
int vis[101][101][5001];
int val[101][101][5001];
int dy[3] = {1, 1, 1};
int dx[3] = {-1, 0, 1};

struct woilium
{
    int q, o;
};

struct pos
{
    int x, y, z;
};

queue<pos> Q;

bool check(int x, int y, int z)
{
    if (x > n || y > m || x < 1 || y < 1 || z >= o)
    {
        return 0;
    }
    return !vis[y][x][z];
    // return 1;
}

woilium BFS(int x, int y, int z)
{
    woilium ANS = {-1, o};
    Q.push({x, y, z});
    while (!Q.empty())
    {
        auto [x, y, z] = Q.front();
        vis[y][x][z] = 0;
        // cout << y << " " << x << " " << z << "\n";
        Q.pop();
        if (y == m)
        {
            // cout << y << " " << x << " " << z << " = " << val[y][x][z] << "\n";
            if (val[y][x][z] > ANS.q)
            {
                ANS = {val[y][x][z], z};
                // cout << "hi\n";
            }
            else if (val[y][x][z] == ANS.q && z < ANS.o)
            {
                ANS = {val[y][x][z], z};
            }
        }
        // cout << "=\n";
        for (int i = 0; i < 3; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + T[ny][nx - 1] + T[ny][nx + 1];
            int nval = val[y][x][z] + T[ny][nx];
            if (nval > val[ny][nx][nz]){
                val[ny][nx][nz] = nval;
                if (check(nx, ny, nz))
                {
                    vis[ny][nx][nz] = 1;
                    Q.push({nx, ny, nz});
                }
            }
        }
    }
    return ANS;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n >> o;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> T[i][j];
        }
    }
    woilium MX = {-1, o}, temp;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << "\n";
        val[1][i][T[1][i + 1] + T[1][i - 1]] = T[1][i];
        temp = BFS(i, 1, T[1][i + 1] + T[1][i - 1]);
        // cout << "------\n";
        if (temp.q > MX.q)
        {
            MX = temp;
        }
        else if (temp.q == MX.q && temp.o < MX.o)
        {
            MX = temp;
        }
    }
    cout << MX.q << "\n"
         << o - MX.o;
    return 0;
}
