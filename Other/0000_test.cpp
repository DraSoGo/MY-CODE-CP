#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dist[2200][2200];

struct A
{
    int v, w, cnt;
    bool operator<(const A &o) const
    {
        return w > o.w;
    }
};

vector<pair<int, int>> adj[2200];
priority_queue<A> pq;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n, p, u, e;
    int l;
    cin >> n >> p >> u >> e;
    for (int i = 1, q, r, t; i <= e; i++)
    {
        cin >> q >> r >> t;
        adj[q].push_back({r, t});
    }
    memset(dist, 0x3f, sizeof dist);
    pq.push({p, dist[p][0] = 0});
    while (!pq.empty())
    {
        A now = pq.top();
        pq.pop();
        if (now.cnt >= n)
            continue;
        // cout << now.v << " " << now.w << " " << now.cnt << "\n";
        int o = 0;
        cout << now.v << "\n";
        for (auto x : adj[now.v])
        {
            cout << o << "\n";
            int nxt = now.w + x.second; // sum weight
            if (dist[x.first][now.cnt + 1] > nxt)
            {
                // cout << nxt << "\n";
                pq.push({x.first, dist[x.first][now.cnt + 1] = nxt, now.cnt + 1}); // if new weight is less than current
            }
            o++;
        }
    }
    cin >> l;
    while (l--)
    {
        int y;
        cin >> y;
        int mn = 2e9;
        for (int i = 1; i <= n; i++)
        {
            // cout << dist[u][i] << "\n";
            mn = min(mn, dist[u][i] + (i * y) - y);
        }
        // cout << mn << "\n\n";
    }
    return 0;
}