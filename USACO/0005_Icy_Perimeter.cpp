#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int x,y;
};

const int sz = 1000;
char T[sz + 2][sz + 2];
bool vis[sz + 2][sz + 2];
queue <pos> Q;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,a,b,ansa = 0,ansb = 0;

bool check(int x,int y)
{
    if (x < 1 || y < 1 || x > n || y > n || T[x][y] == '.')
    {
        return 0;
    }
    return !vis[x][y];
}

void BFS(int x,int y)
{
    Q.push({x,y});
    vis[x][y] = 1;
    a++;
    for (int j = 0; j < 4; j++)
    {
        if (T[x+dx[j]][y+dy[j]] == '.')
        {
            b++;
        }
    }
    while (!Q.empty())
    {
        auto [x,y] = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int dxi = x + dx[i];
            int dyi = y + dy[i];
            if (check(dxi,dyi))
            {
                Q.push({dxi,dyi});
                vis[dxi][dyi] = 1;
                a++;
                for (int j = 0; j < 4; j++)
                {
                    if (T[dxi+dx[j]][dyi+dy[j]] == '.')
                    {
                        b++;
                    }
                }
            }
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= n+1; j++)
        {
            if(i == 0 || j == 0 || i == n + 1 || j == n + 1 )
            {
                T[i][j] = '.';
            }
            else
            {
                cin >> T[i][j];
            }
            // cout << T[i][j];
        }
        // cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!vis[i][j] && T[i][j] == '#')
            {
                a = 0;
                b = 0;
                BFS(i,j);
                if (a > ansa)
                {
                    ansa = a;
                    ansb = b;
                }
                if (a == ansa)
                {
                    ansb = min(ansb,b);
                }
            }
        }
    }
    cout << ansa << " " << ansb;
    
    return 0;
}