#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int x,y;
};


const int sz = 22;
int n;
char T[sz][sz];
bool vis[sz][sz];
int _[sz],I[sz];
int sum_,sumI,add;
queue <pos> Q;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool check(int x,int y,char c)
{
    if (x < 0 || y < 0 || x >= n || y >= n || T[x][y] != c)
    {
        return 0;
    }
    return !vis[x][y];
}

void BFS(int x,int y,char c)
{
    Q.push({x,y});
    vis[x][y] = 1;
    while (!Q.empty())
    {
        auto [x,y] = Q.front();
        if (x == 0 || x == n-1)
        {
            I[y]++;
        }
        if (y == 0 || y == n-1)
        {
            _[x]++;
        }
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if (check(nx,ny,c))
            {
                Q.push({nx,ny});
                vis[nx][ny] = 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
        }
    }
    // if (n == 1)
    // {
    //     cout << 4;
    //     return 0;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            memset(I,0,sizeof(I));
            memset(_,0,sizeof(_));
            if (!vis[i][j])
            {
                BFS(i,j,T[i][j]);
                for (int k = 0; k < sz; k++)
                {
                    // cout << I[k] << " " << _[k] << "\n";
                    if (I[k] == 2 && !(k == 0 || k == n-1))
                    {
                        sumI+=1;
                    }
                    else if (I[k] == 2)
                    {
                        add+=1;
                    }
                    if (_[k] == 2 && !(k == 0 || k == n-1))
                    {
                        sum_+=1;
                    }
                    else if (_[k] == 2)
                    {
                        add+=1;
                    }
                }
            }
        }
    }
    // cout << sumI << " " << sum_ << "\n";
    int ans = (2*sumI)+(2*sum_)+(sumI != 0&&sum_!=0?(sumI+1)*(sum_+1):0)+add;
    cout << ans;
    return 0;
}