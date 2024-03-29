#include <bits/stdc++.h>
using namespace std;

char T[2001][2001];
int m,n,co = 0,ch = 0;
queue <pair<int,int>> Q;
int dx[8] = {0,0,1,-1,1,1,-1,-1};
int dy[8] = {1,-1,0,0,1,-1,1,-1};

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
    return true;
}

void BFS(int x,int y)
{
    Q.push({x,y});
    T[x][y] = '0';
    while (!Q.empty())
    {
        int x1 = Q.front().first;
        int y1 = Q.front().second;
        Q.pop();
        //cout << x1 << " " << y1 << "\n";
        for (int i = 0; i < 8; i++)
        {
            int x2 = x1+dx[i];
            int y2 = y1+dy[i];
            if (check(x2,y2))
            {
                Q.push({x2,y2});
                T[x2][y2] = '0';
            }
        }
        ch++;
        
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (T[i][j] == '1')
            {
                co++;
                BFS(i,j);
            }
        }
    }
    cout << co;
    return 0;
}
