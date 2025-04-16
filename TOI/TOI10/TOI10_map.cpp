#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v;
    char c;
};

struct pos
{
    int i,j,num;
    bool operator < (const pos&a)const
    {
        if (i == a.i)
        {
            return j < a.j;
        }
        return i < a.i;
    }
};


const int sz = 1e5;
int n,m,e,u,v;
char c;
vector <GP> G[sz];
bool vis[sz];
vector <pos> P;
pair <int,int> PG[sz];
queue <int> Q;

void BFS(int st)
{
    PG[st] = {0,0};
    Q.push(st);
    while (!Q.empty())
    {
        int node = Q.front();
        // cout << node << "\n";
        Q.pop();
        if (vis[node])
        {
            continue;
        }
        // cout << PG[node].first << " " << PG[node].second << "\n";
        P.push_back({PG[node].first,PG[node].second,node});
        vis[node] = 1;
        for(auto [nxt,cmd]:G[node])
        {
            Q.push(nxt);
            if (cmd == 'U')
            {
                PG[nxt] = {PG[node].first+1,PG[node].second};
            }
            else if (cmd == 'D')
            {
                PG[nxt] = {PG[node].first-1,PG[node].second};
            }
            else if (cmd == 'L')
            {
                PG[nxt] = {PG[node].first,PG[node].second+1};
            }
            else
            {
                PG[nxt] = {PG[node].first,PG[node].second-1};
            }
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    e = n*m-1;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> c >> v;
        char c2;
        c == 'U'?c2 = 'D':c2 = 'R';
        G[u].push_back({v,c});
        G[v].push_back({u,c2});
    }
    BFS(0);
    sort(P.begin(),P.end());
    // for(auto [i,j,num] : P)
    // {
    //     cout << num << " " << i << " " << j << "\n";
    // }
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << P[idx].num << " ";
            idx++;
        }
        cout << "\n";
    }
    
    return 0;
}