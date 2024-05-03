#include <bits/stdc++.h>
using namespace std;

char T[10001][2001];
char p;
bool vis[10001][2001];
int m,n,ANS[3];
int dx[8] = {0,0,1,-1,1,1,-1,-1};
int dy[8] = {1,-1,0,0,-1,1,1,-1};
queue <pair<int,int>> Q;

bool check(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (T[x][y] == '0')
    {
        return false;
    }
    return !vis[x][y];
}

void BFS(int x,int y)
{
    vector <int> V;
    Q.push({x,y});
    vis[x][y] = 1;
    if (T[x+1][y] == '1' && T[x][y+1] == '1')
    {
        p = 's';
    }
    while (!Q.empty())
    {
        int c = Q.size();
        if(p == 'y')
        {
            if (c == V[0])
            {
                p = 'r';
            }
        }
        if (p == 'x')
        {
            if (V.empty())
            {
                V.push_back(c);
            }
            else
            {
                if (abs(c-V.back()) == 1)
                {
                    p = 't';
                }
                else
                {
                    p = 'y';
                }
                V.push_back(c);
            }
        }
        while (c--)
        {
            auto[x1,y1] = Q.front();
            Q.pop();
            for (int i = 0; i < 8; i++)
            {
                int x2 = x1+dx[i];
                int y2 = y1+dy[i];
                if (check(x2,y2))
                {
                    Q.push({x2,y2});
                    vis[x2][y2] = 1;
                }
            }
        }
    }
}

int main()
{
    memset(vis,0,sizeof(vis));
    memset(ANS,0,sizeof(ANS));
    cin >> n >> m;
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
            if (T[i][j] == '1' && vis[i][j] == 0)
            {
                p = 'x';
                BFS(i,j);
                if (p == 's')
                {
                    ANS[0]++;
                }
                else if (p == 'r')
                {
                    ANS[1]++;
                }
                else if (p == 't' || p == 'y')
                {
                    ANS[2]++;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ANS[i] << " ";
    }
}