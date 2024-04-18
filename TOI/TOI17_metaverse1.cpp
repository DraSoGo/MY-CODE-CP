#include <bits/stdc++.h>
using namespace std;

struct Graph
{
    int v,w,t,ct;
};

vector <Graph> adj[40003];

int dis(int x1,int y1,int x2,int y2)
{
    return abs(x1-x2)+abs(y1-y2);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n,k,p,a = 0,b = 1,x1,y1,x2,y2;
    cin >> m >> n >> k >> p;
    adj[a].push_back({b,dis(0,0,m,n),0,0});
    for (int i = 0; i < k; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
    }
    return 0;
}