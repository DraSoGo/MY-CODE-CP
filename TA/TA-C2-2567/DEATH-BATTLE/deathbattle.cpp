#include <bits/stdc++.h>
using namespace std;

char T[10000][10000];
bool visF[10000][10000],visQ[10000][10000];
int m,n,xf,yf,xq,yq,xp,yp,t;
int dxf[8] = {-2,-2,-1,1,2,2,-1,1};
int dyf[8] = {-1,1,2,2,-1,1,-2,-2};
int dxq[8] = {0,0,-1,1,1,1,-1,-1};
int dyq[8] = {-1,1,0,0,-1,1,1,-1};
queue <pair<int,int>> Q;

bool check(int y,int x,bool c)
{
    if (y < 0 || x < 0 || y > m-1 || x > n-1)
    {
        return 0;
    }
    if (c == 0)
    {
        return !visF[y][x];
    }
    else
    {
        return !visQ[y][x];
    }
    
}

int BFS(bool c)
{
    int st = 0;
    c == 0 ? Q.push({yf,xf}) : Q.push({yq,xq});
    while (!Q.empty())
    {
        int lv = Q.size();
        while (lv--)
        {
            auto [y,x] = Q.front();
            c == 0 ? visF[y][x] = 1: visQ[y][x] = 1;
            // cout << y << " " << x << " " << visF[y][x] << "\n";
            if (y == yp && x == xp)
            {
                return st;
            }
            if (c == 0)
            {
                for (int i = 0; i < 8; i++)
                {
                    int xs = x + dxf[i];
                    int ys = y + dyf[i];
                    if (check(ys,xs,c))
                    {
                        Q.push({ys,xs});
                        visF[ys][xs] = 1;
                    }
                }
            }
            else
            {
                for (int i = 0; i < 8; i++)
                {
                    int xs = x + dxq[i];
                    int ys = y + dyq[i];
                    if (check(ys,xs,c))
                    {
                        Q.push({ys,xs});
                        visQ[ys][xs] = 1;
                    }
                }
            }
            Q.pop();
        }
        st++;
    }
    return -1;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n >> t;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> T[i][j];
            if (T[i][j] == 'F')
            {
                xf = j;
                yf = i;
                visF[i][j] = 1;
            }
            else if (T[i][j] == 'Q')
            {
                xq = j;
                yq = i;
                visQ[i][j] = 1;
            }
            else if (T[i][j] == 'P')
            {
                xp = j;
                yp = i;
            }
            else if (T[i][j] == 'X')
            {
                visF[i][j] = 1;
                visQ[i][j] = 1;
            }
        }
    }
    int sf = BFS(0);
    while (!Q.empty())
    {
        Q.pop();
    }
    int sq = BFS(1);
    if (sf == sq || sf+t == sq)
    {
        cout << sq;
        return 0;
    }
    sf += t;
    if (sf < sq)
    {
        cout << "F " << abs(sf-sq);
    }
    else
    {
        cout << "Q " << abs(sf-sq);
    }
    return 0;
}
