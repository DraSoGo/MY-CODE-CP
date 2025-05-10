#include "tsp.h"
#include <vector>
#include <limits>
using namespace std;

int tsp(const vector<vector<int>> &dist)
{
    int n = dist.size();
    int INF = numeric_limits<int>::max();
    vector<vector<int>> dp(1 << n, vector<int>(n, INF));

    // Start at node 0, visited only node 0
    dp[1][0] = 0;

    for (int mask = 1; mask < (1 << n); ++mask)
    {
        for (int u = 0; u < n; ++u)
        {
            if (!(mask & (1 << u)))
                continue;
            if (dp[mask][u] == INF)
                continue;
            for (int v = 0; v < n; ++v)
            {
                if (mask & (1 << v))
                    continue;
                int next = mask | (1 << v);
                dp[next][v] = min(dp[next][v], dp[mask][u] + dist[u][v]);
            }
        }
    }

    int res = INF;
    for (int i = 1; i < n; ++i)
    {
        if (dp[(1 << n) - 1][i] != INF)
        {
            res = min(res, dp[(1 << n) - 1][i] + dist[i][0]); // return to start
        }
    }
    return res;
}
