#include <bits/stdc++.h>
using namespace std;

int m,n,co;
char G[1000][1000];
bool vis[1000][1000];
stack <pair<int,int>> st;
int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,-1,0,1,-1,0,1,-1};

bool check(int x2,int y2)
{
    if (x2 > m-1 || y2 > n-1 ||x2 < 0 || y2 < 0)
    {
        return false;
    }
    return !vis[x2][y2];
}

void DFS(int x1,int y1)
{
    int x2,y2;
    vis[x1][y1] = true;
    st.push({x1,y1});
    while (!st.empty())
    {
        x2 = st.top().first;
        y2 = st.top().second;
        st.pop();
        for (int i = 0; i < 8; i++)
        {
            if (check(x2 + dx[i],y2 + dy[i]))
            {
                st.push({x2 + dx[i],y2 + dy[i]});
                vis[x2 + dx[i]][y2 + dy[i]] = true;
            }
        }
        co++;
    }
}

int main()
{
    int mx = INT_MIN,mn = INT_MAX,ans = 0;
    memset(vis,false,sizeof(vis));
    cin >> n >> m;
    string A[m];
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = A[i][j];
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
                ans++;
                co = 0;
                DFS(i,j);
                mn = min(mn,co);
                mx = max(mx,co);
            }
        }
    }
    cout << ans << "\n";
    cout << mx << "\n";
    cout << mn;
}