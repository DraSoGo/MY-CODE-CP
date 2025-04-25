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

const int sz = 1e5;
pair <int,int> Y[sz],X[sz];
int e,x,y;
pos st,ed;
map<pos,vector<pair<pos,bool>>> G;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> e;
    cin >> st.x >> st.y;
    cin >> ed.x >> ed.y;
    X[0] = {st.x,st.y};
    X[1] = {ed.x,ed.y};
    Y[0] = {st.y,st.x};
    Y[1] = {ed.y,ed.x};
    for (int i = 2; i < e+2; i++)
    {
        cin >> x >> y;
        X[i] = {x,y};
        Y[i] = {y,x};
    }
    sort(X,X+e+2);
    sort(Y,Y+e+2);
    map<int, vector<int>> same_x, same_y;

    for (int i = 0; i < e+2; i++)
    {
        same_x[X[i].first].push_back(X[i].second);
        same_y[Y[i].first].push_back(Y[i].second);
    }

    for (auto &[x, v] : same_x)
    {
        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            G[{x, v[i-1]}].push_back({{x, v[i]}, 0});
            G[{x, v[i]}].push_back({{x, v[i-1]}, 0});
        }
    }
    for (auto &[x, v] : same_y)
    {
        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            G[{x, v[i-1]}].push_back({{v[i], x}, 1});
            G[{x, v[i]}].push_back({{v[i-1], x}, 1});
        }
    }
    for (auto [k,v]:G)
    {
        cout << k.x << "," << k.y << " :";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first.x << "," << v[i].first.y << " ";
        }
        cout << "\n";
    }
    return 0;
}