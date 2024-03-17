#include <bits/stdc++.h>
using namespace std;

char G[1000][1000];
bool vis[1000][1000];
stack <pair<int,int>> st;
int m,n,co = 0;
int dirx[8] = {1,-1,0,0,1,-1,1,-1};
int diry[8] = {0,0,-1,1,1,-1,-1,1};

bool check(int x2,int y2)
{
    if (x2 > m-1 || y2 > n-1 || x2 < 0 || y2 < 0)
    {
        return false;
    }
    return !vis[x2][y2];
}

void DFS(int x1,int y1)
{
    int x2,y2;
    st.push({x1,y1});
    vis[x1][y1] = true;
    while (!st.empty())
    {
        x2 = st.top().first;
        y2 = st.top().second;
        st.pop();
        for (int i = 0; i < 8; i++)
        {
            if (check(x2 + dirx[i],y2 + diry[i]))
            {
                st.push({x2 + dirx[i],y2 + diry[i]});
                vis[x2 + dirx[i]][y2 + diry[i]] = true;
            }
        }
    }
    co++;
}

int main()
{
    memset(vis,false,sizeof(vis));
    cin >> n >> m;
    string s[m];
    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = s[i][j];
            if (G[i][j] == '.')
            {
                vis[i][j] = true;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == false)
            {
                DFS(i,j);
            }
        }
    }
    cout << co;
}