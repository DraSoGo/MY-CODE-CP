#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int i,j;
};


const int sz = 10;
int m,n,ans;
int T[sz][sz];
int di[4] = {0,0,1,-1};
int dj[4] = {1,-1,0,0};
bool vis[sz][sz];
queue <pos> Q;

bool check(int i,int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m || T[i][j] == 1)
    {
        return 0;
    }
    return 1;
}

void BFS(int si,int sj)
{
    Q.push({si,sj});
    while (!Q.empty())
    {
        auto [ii,jj] = Q.front();
        Q.pop();
        if (vis[ii][jj])
        {
            continue;
        }
        ans++;
        vis[ii][jj] = 1;
        for (int i = 0; i < 4; i++)
        {
            int ni = ii+di[i];
            int nj = jj+dj[i];
            if (check(ni,nj))
            {
                Q.push({ni,nj});
            }
        }
        
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
        }
    }
    BFS(0,0);
    cout << ans-1;
    return 0;
}
/*
INPUT
5 5
0 1 0 0 0
0 1 0 1 0
0 1 0 1 0
0 1 0 1 0
0 0 0 1 0
OUTPUT
16
*/