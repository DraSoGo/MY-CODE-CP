#include <bits/stdc++.h>
using namespace std;

struct ROOM
{
    int v,idx;
    bool operator < (const ROOM&a)const
    {
        return a.v < v;
    }
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,u,v,num = 1;
    cin >> n;
    vector <pair<int,pair<int,int>>> V;
    priority_queue <ROOM> PQ;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        V.push_back({u,{v,i}});
    }
    sort(V.begin(),V.end());
    for (int i = 0; i < n; i++)
    {
        if (PQ.size() == 0)
        {
            ans[V[i].second.second] = num;
            PQ.push({V[i].second.first,num});
            num++;
        }
        else
        {
            if (V[i].first > PQ.top().v)
            {
                ans[V[i].second.second] = PQ.top().idx;
                PQ.pop();
                PQ.push({V[i].second.first,ans[V[i].second.second]});
            }
            else
            {
                ans[V[i].second.second] = num;
                PQ.push({V[i].second.first,num});
                num++;
            }
        }
    }
    cout << PQ.size() << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}
