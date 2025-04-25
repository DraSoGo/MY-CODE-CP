#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree <T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

const int sz = 1e4;
ordered_set <int> S;
int n1,n2,e1,e2,u,v,q,x;
int in1[sz],in2[sz];
set <int> dis1[sz],dis2[sz];
vector <int> G1[sz],G2[sz];
bool vis1[sz],vis2[sz];
ordered_set <int> ans1,ans2;

void topo(set <int> dis[sz],vector <int> G[sz],int in[sz],bool vis[sz],int n)
{
    dis[0].insert(0);
    queue <int> Q;
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
        if (vis[node])
        {
            continue;
        }
        vis[node] = 1;
        for (auto nxt:G[node])
        {
            in[nxt]--;
            if (in[nxt] == 0)
            {
                Q.push(nxt);
            }
            for (auto v:dis[node])
            {
                dis[nxt].insert(v+1);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n1 >> n2 >> e1 >> e2;
    for (int i = 0; i < e1; i++)
    {
        cin >> u >> v;
        u--,v--;
        G1[u].push_back(v);
        in1[v]++;
    }
    for (int i = 0; i < e2; i++)
    {
        cin >> u >> v;
        u--,v--;
        G2[u].push_back(v);
        in2[v]++;
    }
    topo(dis1,G1,in1,vis1,n1);
    topo(dis2,G2,in2,vis2,n2);
    for (auto v:dis1[n1-1])
    {
        ans1.insert(v);
    }
    for (auto v:dis2[n2-1])
    {
        ans2.insert(v);
    }
    cin >> q;
    while (q--)
    {
        bool ch = 0;
        cin >> x;
        for (auto v:ans1)
        {
            if (ans2.find(x-v) != ans2.end())
            {
                ch = 1;
                break;
            }
        }
        cout << (ch?"Yes\n":"No\n");
    }
    return 0;
}