#include <bits/stdc++.h>
using namespace std;

struct GP
{
    long long v,t,w;
};

struct ST
{
    long long v,wf,wg;
};

vector <pair<long long,long long>> V;
stack <ST> S;
const long long sz = 3e5+1;
vector <GP> G[sz];
long long n,e,z,x,u,v,c,w,mn = LLONG_MAX;

void DFS(long long st)
{
    S.push({st,0,0});
    while (!S.empty())
    {
        auto [node,wf,wg] = S.top();
        S.pop();
        if (node == n-1)
        {
            V.push_back({wf,wg});
        }
        for(auto [nxt,t,nw]:G[node])
        {
            t == 1?S.push({nxt,wf+nw,wg}):S.push({nxt,wf,wg+nw});
        }
    }
}

void closet()
{
    sort(V.begin(),V.end());
    set <pair<long long,long long>> s;
    long long j = 0,p = V.size();
    for (long long i = 0; i < p; i++)
    {
        long long d = sqrt(mn)+1;
        while (V[i].first - V[j].first >= d)
        {
            s.erase({V[j].second,V[j].first});
            j++;
        }
        auto it1 = s.lower_bound({V[i].second-d,V[i].first});
        auto it2 = s.upper_bound({V[i].second+d,V[i].first});
        for (auto it = it1; it != it2; it++)
        {
            long long dx = V[i].first - it ->second;
            long long dy = V[i].second - it ->first;
            mn = min(mn,(dx*dx) + (dy*dy));
            // cout << dx*dx + dy*dy << "\n";
        }
        
        s.insert({V[i].second,V[i].first});
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> e >> z;
    for (long long i = 0; i < z; i++)
    {
        cin >> x;
    }
    for (long long i = 0; i < e; i++)
    {
        cin >> u >> v >> c >> w;
        u--;
        v--;
        G[u].push_back({v,c,w});
    }
    DFS(0);
    // for (long long i = 0; i < V.size(); i++)
    // {
    //     cout << V[i].first << " " << V[i].second << "\n";
    // }
    closet();
    cout << mn;
    return 0;
}