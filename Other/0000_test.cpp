#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        int M;
        if(!(cin >> M)) return 0;
        if(M == 0) break;

        // 1) read costs
        vector<ll> cost(M+1);
        for(int i = 1; i <= M; i++){
            cin >> cost[i];
        }

        // 2) read endpoints
        int P;
        cin >> P;
        vector<int> endpoints;
        for(int i = 0; i < P; i++){
            int t; char side;
            cin >> t >> side;       // side is A or B; we ignore it
            endpoints.push_back(t);
        }

        // 3) build graph
        vector<vector<int>> adj(M+1);
        for(int u = 1; u <= M; u++){
            int K;
            cin >> K;
            for(int j = 0; j < K; j++){
                int v; char side;
                cin >> v >> side;    // again ignore side
                adj[u].push_back(v);
            }
        }

        // 4) multi-source Dijkstra: dist[v] = min cost to reach v
        vector<ll> dist(M+1, INF);
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;
        for(int s: endpoints){
            if(dist[s] > cost[s]){
                dist[s] = cost[s];
                pq.emplace(dist[s], s);
            }
        }
        while(!pq.empty()){
            auto [d,u] = pq.top(); pq.pop();
            if(d > dist[u]) continue;
            for(int v: adj[u]){
                ll nd = d + cost[v];
                if(nd < dist[v]){
                    dist[v] = nd;
                    pq.emplace(nd, v);
                }
            }
        }

        // 5) find minimal endpoint cost
        ll bestCost = INF;
        for(int e: endpoints){
            bestCost = min(bestCost, dist[e]);
        }

        // 6) build shortest-path DAG and DP for max segments
        vector<vector<int>> dag(M+1);
        vector<pair<ll,int>> order;
        order.reserve(M);
        for(int u = 1; u <= M; u++){
            if(dist[u] < INF){
                order.emplace_back(dist[u], u);
                for(int v: adj[u]){
                    if(dist[v] == dist[u] + cost[v]){
                        dag[u].push_back(v);
                    }
                }
            }
        }
        sort(order.begin(), order.end());

        vector<int> dp(M+1, 0);
        for(int s: endpoints){
            if(dist[s] < INF){
                dp[s] = 1;
            }
        }
        for(auto &pr: order){
            int u = pr.second;
            if(dp[u] > 0){
                for(int v: dag[u]){
                    dp[v] = max(dp[v], dp[u] + 1);
                }
            }
        }

        int bestLen = 0;
        for(int e: endpoints){
            if(dist[e] == bestCost){
                bestLen = max(bestLen, dp[e]);
            }
        }

        // 7) output
        cout << bestCost << " " << bestLen << "\n";
    }

    return 0;
}
