#include <bits/stdc++.h>
using namespace std;

bool visw[1001][1001];
bool visc[1001][1001];
queue <pair<int,int>> Q;
char A[1001][1001];
int SC[1001][1001];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int m,n,mx = -1;

bool checkw(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (A[x][y] == 'X')
    {
        return false;
    }
    return !visw[x][y];
}

bool checkc(int x,int y)
{
    if (x < 0 || y < 0 || x > m-1 || y > n-1)
    {
        return false;
    }
    if (A[x][y] == '.')
    {
        return false;
    }
    return !visc[x][y];
}

void BFSW(int x,int y)
{
    Q.push({x,y});
    visw[x][y] = 1;
    while (!Q.empty())
    {
        auto[x1,y1] = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1+dx[i],y2 = y1+dy[i];
            if (checkw(x2,y2))
            {
                Q.push({x2,y2});
                visw[x2][y2] = 1;
            }
        }
    }
}

void BFSC(int x,int y)
{
    int sum = 0;
    Q.push({x,y});
    visc[x][y] = 1;
    while (!Q.empty())
    {
        auto[x1,y1] = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x2 = x1+dx[i],y2 = y1+dy[i];
            if (visw[x2][y2] == 1)
            {
                sum += 1;
            }
            if (checkc(x2,y2))
            {
                Q.push({x2,y2});
                visc[x2][y2] = 1;
            }
        }
    }
    mx = max(sum,mx);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(visw,0,sizeof(visw));
    memset(visc,0,sizeof(visc));
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    BFSW(0,0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] == 'X' && visc[i][j] == 0)
            {
                BFSC(i,j);
            }
        }
    }
    cout << mx;
    return 0;
}