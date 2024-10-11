#include <bits/stdc++.h>
using namespace std;

priority_queue <int> PQ;
vector <int> G[10001];
int AW[10001];
int n,e;

void karn()
{
    int x;
    while (!PQ.empty())
    {
        x = PQ.top();
        PQ.pop();
        cout << x+1 << " ";
        for (int i = 0; i < G[x].size(); i++)
        {
            AW[G[x][i]]--;
            if (AW[G[x][i]] == 0)
            {
                PQ.push(G[x][i]);
            }
            
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    cin >> n >> e;
    int u,v;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        G[u-1].push_back(v-1);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < G[i].size(); j++)
        {
            AW[G[i][j]]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (AW[i] == 0)
        {
            PQ.push(i);
        }
    }
    karn();
    
    return 0;
}