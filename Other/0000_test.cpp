#include <bits/stdc++.h>
using namespace std;

int n, s, w, a, ans;
vector<vector<pair<int, int>>> v;
vector<int> dist, poi;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> s;
    v.resize(1 << s);
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        int cure = 0, poison = 0;
        for (int j = 0; j < s; j++)
        {
            cure <<= 1;
            poison <<= 1;
            cin >> a;
            if (a == 1)
                cure++;
            if (a == -1)
                poison++;
        }
        poi.push_back(poison);
        v[poison].push_back({w, cure});
    }
    dist.assign(1 << s, INT_MAX);
    dist[0] = 0;
    pq.push({0, 0});
    while (!pq.empty())
    {
        auto [w, now] = pq.top();
        pq.pop();
        if (w > dist[now])
            continue;
        for (auto &[tow, to] : v[now])
        {
            if (dist[to] > tow + w)
            {
                dist[to] = tow + w;
                pq.push({tow + w, to});
            }
        }
        for (int i = 0; i < s; i++)
        {
            if (now & (1 << i))
            {
                int to = now ^ (1 << i);
                if (dist[to] > w)
                {
                    dist[to] = w;
                    pq.push({w, to});
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dist[poi[i]] != INT_MAX)
            ans = max(ans, dist[poi[i]]);
    }
    cout << ans << '\n';
    return 0;
}