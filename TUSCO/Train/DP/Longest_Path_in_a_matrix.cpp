#include <bits/stdc++.h>
using namespace std;

int m,n,ans = 0;
int DP[101][101];
int T[101][101];
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};

int dfs(int a,int b)
{
    if (DP[a][b] > 0)
    {
        return DP[a][b];
    }
    int mx = 0;
    for (int i = 0; i < 4; i++)
    {
        int x = a + dx[i];
        int y = b + dy[i];
        if (x >= 0 && y >= 0 && y < n && x < m && T[a][b] < T[x][y])
        {
            int z = dfs(x,y);
            mx = max(z,mx);
        }
    }
    DP[a][b] = mx+1;
    return DP[a][b];
}

int main()
{
    memset(DP,0,sizeof(DP));
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans = max(ans,dfs(i,j));
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << DP[i][j] << " ";
        }
        cout << "\n";
    }
    cout << ans;
}