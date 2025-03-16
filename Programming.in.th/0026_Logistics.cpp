#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int v;
    double w;
};

struct ans
{
    int x,y;
    double w;
};


const int sz = 30;
char u,v;
int su,sv,co;
double w,sum;
int n;
bool vis[sz],ch;
vector <GP> G[sz];
queue <GP> Q;
ans ANS[sz];

void BFS(int st)
{
    Q.push({st,0});
    vis[st] = 1;
    int idx = 0;
    while (!Q.empty())
    {
        int lv = Q.size();
        double mn = INT_MAX;
        int x = Q.front().v,y;
        vector <double> V;
        co++;
        // auto [tmpnode,tmpw] = Q.front();
        while (lv--)
        {
            auto [node,w] = Q.front();
            Q.pop();
            // cout << node << " " << w << "\n";
            V.push_back(w);
            mn = min(w,mn);
            int a;
            for(auto [nxt,nw]:G[node])
            {
                if (!vis[nxt])
                {
                    Q.push({nxt,nw});
                    a = nxt;
                }
            }
            vis[a] = 1;
            y = a;
        }
        sort(V.begin(),V.end());
        double tmp;
        // cout << V.size() << " " << (V.size()+1)/2 << " " ;
        V.size()%2 == 1?tmp = V[((V.size()+1)/2)-1]:tmp = (V[(V.size()/2)-1]+V[(V.size()/2)])/2;
        if (y == 28)
        {
            ch = 1;
        }
        ANS[idx].x = x;
        ANS[idx].y = y;
        ANS[idx-1].w = tmp;
        sum += tmp;
        // cout << tmp << "\n";
        idx++;
        // cout << x << " " << y << " " << tmp;
        // vis[tmpnode] = 1;
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v >> w;
        su = (u-'a')+1;
        sv = (v-'a')+1;
        if (u == 'X')
        {
            // cout << u << "\n";
            su = 0;
        }
        if (v == 'X')
        {
            sv = 0;
        }
        if (u == 'Y')
        {
            su = 28;
        }
        if (v == 'Y')
        {
            sv = 28;
        }
        // cout << su << " " << sv << " " << "\n";
        G[su].push_back({sv,w});
        G[sv].push_back({su,w});
    }
    BFS(0);
    if (ch)
    {
        for (int i = 0; i < co-1; i++)
        {
            char cx,cy;
            cx = 'a' + (ANS[i].x-1);
            cy = 'a' + (ANS[i].y-1);
            if (ANS[i].x == 0)
            {
                cx = 'X';
            }
            if (ANS[i].y == 28)
            {
                cy = 'Y';
            }
            cout << cx << " " << cy << " " << fixed << setprecision(1) << ANS[i].w << "\n";
        }
        cout << sum;
    }
    else
    {
        cout << "broken";
    }
    
    return 0;
}