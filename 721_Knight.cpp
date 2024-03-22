#include <bits/stdc++.h>
using namespace std;

long long co,m,n;
bool vis[1001][1001];
queue <pair<long long,long long>> Q;
long long c,d;
long long dx[8] = {-2,-1,1,2,-2,1,2,-1};
long long dy[8] = {-1,-2,2,1,1,-2,-1,2};

bool check(long long x,long long y)
{
    if (x < 0 || y < 0 || x > m-1 || y > m-1)
    {
        return false;
    }
    return !vis[x][y];
    
}
long long BFS(long long x,long long y)
{
    co = 0;
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        long long lvq = Q.size();
        while (lvq--)
        {
            auto [x1,y1] = Q.front();
            //cout << x1 << " " << y1 << "\n";
            if (x1 == c && y1 == d)
            {
                return co;
            }
            
            Q.pop();
            for (long long i = 0; i < 8; i++)
            {
                long long x2 = x1+dx[i];
                long long y2 = y1+dy[i];
                if (check(x2,y2))
                {
                    Q.push({x2,y2});
                    vis[x2][y2] = 1;
                }
            }
        }
        co++;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis,0,sizeof(vis));
    long long a,b;
    cin >> m >> c >> d >> a >> b;
    a--;
    b--;
    c--;
    d--;
    cout << BFS(a,b);
    return 0;
}