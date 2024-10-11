#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    long long v,w;
    bool operator < (const Graph & a)const
    {
        return w > a.w;
    }
};

const long long N = 2e5+1;
vector <Graph> adj[N];
priority_queue <Graph> PQ;
long long dis[N];
bool vis[N];

void DJ()
{
    dis[0] = 0;
    PQ.push({0,0});
    while (!PQ.empty())
    {
        auto[u,w] = PQ.top();
        PQ.pop();
        if (vis[u])
        {
            continue;
        }
        vis[u] = 1;
        for (long long i = 0; i < adj[u].size(); i++)
        {
            if (dis[adj[u][i].v] > w + adj[u][i].w)
            {
                dis[adj[u][i].v] = w + adj[u][i].w;
                PQ.push({adj[u][i].v,dis[adj[u][i].v]});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,e,c,u,v,ans = 0,p,ch;
    vector <long long> txt[27];
    cin >> n >> e >> c;
    char st[n],C[c];
    long long pos[27];
    for (long long i = 0; i < 27; i++)
    {
        pos[i] = 0;
    }
    for (long long i = 0; i < N; i++)
    {
        dis[i] = LONG_LONG_MAX;
        vis[i] = 0;
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> st[i];
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v;
        u--,v--;
        adj[u].push_back({v,1});
        adj[v].push_back({u,1});
    }
    for (long long i = 0; i < c; i++)
    {
        cin >> C[i];
    }
    DJ();
    for (long long i = 0; i < n; i++)
    {
        dis[i] *= 2;
        p = st[i]-'A';
        // cout << p << ":" << i << "\n";
        txt[p].push_back(dis[i]);
    }
    // cout << "\n";
    for (long long i = 0; i < 26; i++)
    {
        sort(txt[i].begin(),txt[i].end());
    }
    // for (long long i = 0; i < 3; i++)
    // {
    //     cout << i << " :";
    //     for (long long j = 0; j < txt[i].size(); j++)
    //     {
    //         cout << txt[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    for (long long i = 0; i < c; i++)
    {
        p = C[i] - 'A';
        ch = 0;
        for (long long j = pos[p]; j < txt[p].size(); j++)
        {
            if (txt[p][j]!=-1)
            {
                ans += txt[p][j];
                txt[p][j] = -1;
                ch = 1;
                break;
            }
        }
        pos[p]++;
        // cout << ans << "\n";
        if (ch == 0)
        {
            ans = -1;
            break;
        }
    }
    cout << ans;
    return 0;
}