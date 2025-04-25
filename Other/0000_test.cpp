#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
#define pb push_back

const int N = 1010;
vector<pair<int, char>> adj[N];
vector<vector<int>> D(N, vector<int>(N, 1e9));

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        char c;
        cin >> a >> b >> c;
        --a, --b;
        adj[a].pb({b, c});
        adj[b].pb({a, c});
    }
    queue<pi> q;
    for (int i = 0; i < n; i++)
    {
        D[i][i] = 0;
        q.push({i, i});
        for (const auto &[j, _] : adj[i])
        {
            if (D[i][j] == 1e9)
            {
                D[i][j] = D[j][i] = 1;
                q.push({i, j});
            }
        }
    }
    while (q.size())
    {
        const auto [c, d] = q.front();
        q.pop();
        int new_len = D[c][d] + 2;
        for (const auto &[a, c1] : adj[c])
        {
            for (const auto &[b, c2] : adj[d])
            {
                if (c1 == c2 && new_len < D[a][b])
                {
                    D[a][b] = D[b][a] = new_len;
                    q.push({a, b});
                }
            }
        }
    }
    cout << (D[0][n - 1] == 1e9 ? -1 : D[0][n - 1]) << '\n';
}
