#include <bits/stdc++.h>
using namespace std;

int m,n,T[100][100],vis[100][100];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
queue <pair<int,int>> Q;


bool check(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return 0;
    }
    else if (T[x][y] == 1)
    {
        return 0;
    }
    return !vis[x][y];
}

int BFS()
{
    int st = 0;
    Q.push({0,0});
    vis[0][0] = 1;
    while (!Q.empty())
    {
        int lvq = Q.size();
        while (lvq--)
        {
            auto [x1,y1] = Q.front();
            if (x1 == m-1 && y1 == n-1)
            {
                return st;
            }
            Q.pop();
            for (int i = 0; i < 4; i++)
            {
                int x2 = x1 + dx[i];
                int y2 = y1 + dy[i];
                if (check(x2,y2))
                {
                    Q.push({x2,y2});
                    vis[x2][y2] = 1;
                }
            }
        }
        st++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    cout << BFS();
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