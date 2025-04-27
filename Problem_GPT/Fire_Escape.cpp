#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int i, j;
};

const int sz = 1e3;
int n, m;
int di[4] = {0,0,1,-1};
int dj[4] = {1,-1,0,0};
pos st, ed;
char T[sz][sz];
bool vis[sz][sz];
queue<pos> F,P;

int BFS(queue <pos> Q)
{
    memset(vis,0,sizeof(vis));
    int num = 0;
    // cout << Q.size() << "\n";
    while (!Q.empty())
    {
        int lvq = Q.size();
        while (lvq--)
         {
            auto [ii,jj] = Q.front();
            Q.pop();
            // cout << ii << " " << jj << " " << ed.i << " " << ed.j << "\n";
            if (ii == ed.i && jj == ed.j)
            {
                return num;
            }
            if (vis[ii][jj])
            {
                continue;
            }
            vis[ii][jj] = 1;
            for (int k = 0; k < 4; k++)
            {
                int ni = ii + di[k];
                int nj = jj + dj[k];
                // cout << ni << "," << nj << " ";
                if (ni < 0 || nj < 0 || ni >= n || nj >= m || T[ni][nj] == '#')
                {
                    continue;
                }
                Q.push({ni,nj});

            }
            // cout << "\n";
        }
        num++;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
            // cout << T[i][j];
            if (T[i][j] == '*')
            {
                F.push({i, j});
            }
            else if (T[i][j] == 'S')
            {
                P.push({i, j});
            }
            else if (T[i][j] == 'F')
            {
                // cout << i << " " << j << "\n";
                ed = {i, j};
            }
        }
        // cout << "\n";
    }
    int f = BFS(F);
    // cout << "\n";
    int p = BFS(P);
    // cout << f << " " << p << "\n";
    if (f <= p)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << p;
    }
    
    return 0;
}