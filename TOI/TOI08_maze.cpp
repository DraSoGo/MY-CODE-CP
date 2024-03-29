#include <bits/stdc++.h>
using namespace std;

long long A[1000][1000];
long long m,n,xs,ys,xe,ye,co = 0;
bool vis[1000][1000];
bool mem[1000][1000];
queue <pair<long long,long long>> Q;
long long dx[4] = {1,-1,0,0};
long long dy[4] = {0,0,1,-1};
long long ans = INT_MAX;

bool checkex(long long x,long long y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (A[x][y] == 0)
    {
        return false;
    }
    return !vis[x][y];
}

bool check(long long x,long long y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (A[x][y] == 2)
    {
        return !mem[x][y];
    }
    return false;
}

bool checkst(long long x,long long y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (A[x][y] == 0)
    {
        for (long long i = 0; i < 4; i++)
        {
            long long x1 = x + dx[i],y1 = y + dy[i];
            if (check(x1,y1))
            {
                mem[x][y] = 1;
                break;
            }
        }
        return false;
        
    }
    return !vis[x][y];
}

void BFSEX(long long x,long long y)
{
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        auto [x1,y1] = Q.front();
        A[x1][y1] = 2;
        Q.pop();
        for (long long i = 0; i < 4; i++)
        {
            long long x2 = x1 + dx[i],y2 = y1 + dy[i];
            if (checkex(x2,y2))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
            }
        }
    }
}

void BFSST(long long x,long long y)
{
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        auto [x1,y1] = Q.front();
        Q.pop();
        for (long long i = 0; i < 4; i++)
        {
            long long x2 = x1 + dx[i],y2 = y1 + dy[i];
            if (checkst(x2,y2))
            {
                Q.push({x2,y2});
                vis[x2][y2] = 1;
            }
        }
    }
}

long long BFS(long long x,long long y)
{
    Q.push({x,y});
    vis[x][y] = 1;
    long long lv = 1;
    while (!Q.empty())
    {
        long long lvq = Q.size();
        while (lvq--)
        {
            auto [x1,y1] = Q.front();
            if (x1 == xe && y1 == ye)
            {
                ans = min(ans,lv);
            }
            Q.pop();
            for (long long i = 0; i < 4; i++)
            {
                long long x2 = x1 + dx[i],y2 = y1 + dy[i];
                if (checkex(x2,y2))
                {
                    Q.push({x2,y2});
                    vis[x2][y2] = 1;
                }
            }
        }
        lv++;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(mem,0,sizeof(mem));
    cin >> m >> n >> xs >> ys >> xe >> ye;
    xs--;ys--;xe--;ye--;
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    memset(vis,0,sizeof(vis));
    BFSEX(xe,ye);
    memset(vis,0,sizeof(vis));
    BFSST(xs,ys);
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (mem[i][j] == 1)
            {
                co++;
                A[i][j] = 1;
            }
            //cout << mem[i][j] << " ";
        }
        //cout << "\n";
    }
    cout << co << "\n";
    // for (long long i = 0; i < m; i++)
    // {
    //     for (long long j = 0; j < n; j++)
    //     {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    memset(vis,0,sizeof(vis));
    cout << BFS(xs,ys);
    return 0;
}