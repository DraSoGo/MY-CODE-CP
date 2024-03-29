#include <bits/stdc++.h>
using namespace std;
queue <pair<int,int>> Q;
int B[100][100];
int C[100][100];
bool vis[100][100];
int dx[8] = {0,0,1,1,-1,-1,1,-1};
int dy[8] = {1,-1,1,-1,1,-1,0,0};
int n;

bool check(int x,int y)
{
    if (x < 0 || x > n-1 || y < 0 || y > n-1)
    {
        return false;
    }
    if (B[y][x] > 0)
    {
        C[y][x] = 1;
        return false;
    }
    return !vis[x][y];
}

void walk(int x,int y)
{
    int x2,y2;
    Q.push({x,y});
    vis[x][y] = true;
    while (!Q.empty())
    {
        x2 = Q.front().first;
        y2 = Q.front().second;
        Q.pop();
        for (int i = 0; i < 8; i++)
        {
            if (check(x2+dx[i],y2+dy[i]))
            {
                Q.push({x2+dx[i],y2+dy[i]});
                vis[x2+dx[i]][y2+dy[i]] = true;
            }
        }
    }
}

int main()
{
    memset(vis,false,sizeof(vis));
    int x,y,sum = 0;
    cin >> n >> x >> y;
    char A[n][n];
    memset(B,0,sizeof(B));
    memset(C,0,sizeof(C));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == '*')
            {
                for (int k = 0; k < 8; k++)
                {
                    if (i+dx[k] >= 0 && i+dx[k] < n && j+dy[k] >= 0 && j+dy[k] < n)
                    {
                        B[i+dx[k]][j+dy[k]]++;
                    }
                }
            }
        }
    }
    walk(x-1,y-1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (C[i][j] == 1)
            {
                sum += B[i][j];
            }
            
        }
    }
    cout << sum;    
}