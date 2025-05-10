#include "longest_path.h"
#include <bits/stdc++.h>
using namespace std;

int longest_path(int n, const vector<vector<pair<int, int>>>& graph)
{
    int in[n],dp[n];
    queue <int> Q;
    memset(in,0,sizeof(in));
    memset(dp,0,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        for (auto [v,w]:graph[i])
        {
            in[v]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (in[i] == 0)
        {
            Q.push(i);
        }
    }
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        for (auto [nxt,w]:graph[node])
        {
            if (dp[nxt] < dp[node] + w)
            {
                dp[nxt] = dp[node] + w;
            }
            in[nxt]--;
            if (in[nxt] == 0)
            {
                Q.push(nxt);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans,dp[i]);
    }
    return ans ;
}