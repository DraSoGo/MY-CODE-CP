#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int n,e,u,v;
vector <int> G[sz];
priority_queue<int> PQ;
int indeg[sz];
vector <int> ans;

void TPS()
{
    while (!PQ.empty())
    {
        int node = PQ.top();
        PQ.pop();
        // cout << node + 1 << " ";
        ans.push_back(node+1);
        for(int nxt:G[node])
        {
            indeg[nxt]--;
            if (indeg[nxt] == 0)
            {
                PQ.push(nxt);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        G[v].push_back(u);
        indeg[u]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            PQ.push(i);
        }
    }
    TPS();
    // cout << "\n";
    reverse(ans.begin(),ans.end());
    for (auto v:ans)
    {
        cout << v << " ";
    }
    
    return 0;
}