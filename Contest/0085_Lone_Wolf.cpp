#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int i,j;
};


const int sz = 501;
int n,m,cow,co;
char T[sz][sz];
bool vis[sz][sz];
int di[4] = {1,-1,0,0};
int dj[4] = {0,0,1,-1};
queue <pos> Q;

bool check(int i,int j)
{
    if (i < 0 || j < 0 || i > n-1 || j > m-1 || T[i][j] == '#')
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
        vis[ii][jj] = 1;
        // cout << ii << " " << jj << "\n";
        if (T[ii][jj] == 'W')
        {
            co++;
        }
        for (int i = 0; i < 4; i++)
        {
            int ni = ii+di[i];
            int nj = jj+dj[i];
            if (check(ni,nj))
            {
                // cout << ni << " " << nj << "\n";
                Q.push({ni,nj});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int si,sj;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> T[i][j];
            if (T[i][j] == 'N')
            {
                si = i;
                sj =j;
            }
            if (T[i][j] == 'W')
            {
                cow++;
            }
        }
    }
    BFS(si,sj);
    if (cow == co)
    {
        cout << "Success";
        return 0;
    }
    cout << "LoneWolf " << co;
    return 0;
}