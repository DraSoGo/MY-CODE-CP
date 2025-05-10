#include "longest_path.h"
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int u, const vector<vector<pair<int, int>>>& graph, vector<int>& dp, vector<bool>& visited) {
    visited[u] = true;
    for (auto [v, w] : graph[u]) {
        if (!visited[v]) dfs(v, graph, dp, visited);
        dp[u] = max(dp[u], w + dp[v]);
    }
}

int longest_path(int n, const vector<vector<pair<int, int>>>& graph) {
    vector<int> dp(n, 0);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) dfs(i, graph, dp, visited);
    }
    return *max_element(dp.begin(), dp.end());
}