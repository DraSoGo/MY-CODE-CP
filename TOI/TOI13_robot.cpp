#include <bits/stdc++.h>
using namespace std;
queue <pair<int,int>> Q;
char T[2001][2001];
int sol[2001][2001];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int m,n,mx = INT_MAX,ch = 0;

bool check(int x,int y,int xs,int ys)
{
    if (sol[x][y] <= sol[xs][ys]+1)
    {
        return false;
    }
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == 'W' || T[x][y] == 'X')
    {
        return false;
    }
    return true;
}

void BFS()
{
    while (!Q.empty())
    {
        auto[x1,y1] = Q.front();
        Q.pop();
        for (int j = 0; j < 4; j++)
        {
            int x2 = x1+dx[j];
            int y2 = y1+dy[j];
            if (check(x2,y2,x1,y1))
            {
                Q.push({x2,y2});
                sol[x2][y2] = sol[x1][y1]+1;
            }
        }
    }
    
}

int main()
{
    int co = 0,ans = 0;
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
            if (T[i][j] == 'X')
            {
                Q.push({i,j});
                sol[i][j] = 0;
            }
            else if (T[i][j] == 'W')
            {
                sol[i][j] = -1;
            }
            else
            {
                sol[i][j] = INT_MAX;
            }
            
        }
    }
    BFS();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sol[i][j] != INT_MAX && T[i][j] == 'A')
            {
                co++;
                ans += sol[i][j]*2;
            }
        }
    }
    cout << co << " " << ans;
    return 0;
}