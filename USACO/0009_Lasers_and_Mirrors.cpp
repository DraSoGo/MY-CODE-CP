#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int x,y;
    bool operator<(const pos& a) const
    {
        return tie(x, y) < tie(a.x, a.y);
    }
};

const int sz = 1e5+10,inf = 1e9;
pair <int,int> Y[sz],X[sz];
int e,x,y;
pos st,ed;
map<pos,vector<pair<pos,bool>>> G;
deque <pair<pos,bool>> DQ;
map <pos,array<int,2>> dis;

void BFS()
{
    DQ.push_front({{st.x,st.y},0});
    DQ.push_front({{st.x,st.y},1});
    while (!DQ.empty())
    {
        auto [node,v] = DQ.front();
        DQ.pop_front();
        int w = dis[node][v];
        for (auto [nxt,nv]:G[node])
        {
            int nw = (v == nv?0:1);
            if (dis[nxt][nv] > w+nw)
            {
                dis[nxt][nv] = w+nw;
                if (nw == 0)
                {
                    DQ.push_front({nxt,nv});
                }
                else
                {
                    DQ.push_back({nxt,nv});
                }
            }
            
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream fin("lasers.in");
    ofstream fout("lasers.out");
    cin >> e;
    cin >> st.x >> st.y;
    cin >> ed.x >> ed.y;
    X[0] = {st.x,st.y};
    X[1] = {ed.x,ed.y};
    Y[0] = {st.y,st.x};
    Y[1] = {ed.y,ed.x};
    dis[st] = {0,0};
    dis[ed] = {inf,inf};
    for (int i = 2; i < e+2; i++)
    {
        cin >> x >> y;
        dis[{x,y}] = {inf,inf};
        X[i] = {x,y};
        Y[i] = {y,x};
    }
    sort(X,X+e+2);
    sort(Y,Y+e+2);
    map<int, vector<int>> GX, GY;

    for (int i = 0; i < e+2; i++)
    {
        GX[X[i].first].push_back(X[i].second);
        GY[Y[i].first].push_back(Y[i].second);
    }

    for (auto &[x, v] : GX)
    {
        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            G[{x, v[i-1]}].push_back({{x, v[i]}, 0});
            G[{x, v[i]}].push_back({{x, v[i-1]}, 0});
        }
    }
    for (auto &[x, v] : GY)
    {
        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            G[{v[i-1], x}].push_back({{v[i], x}, 1});
            G[{v[i], x}].push_back({{v[i-1], x}, 1});
        }
    }
    // for (auto [k,v]:G)
    // {
    //     cout << k.x << "," << k.y << " :";
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i].first.x << "," << v[i].first.y << " ";
    //     }
    //     cout << "\n";
    // }
    BFS();
    cout << (min(dis[ed][0],dis[ed][1]) == inf?-1:min(dis[ed][0],dis[ed][1]));
    return 0;
}