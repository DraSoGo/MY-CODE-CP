#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

struct wrap
{
    long long p,x,y;
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,n,k,sx,sy,dx,dy;
    cin >> m >> n >> k;
    wrap T[m+1][n+1];
    for (long long i = 0; i < m+1; i++)
    {
        for (long long j = 0; j < n+1; j++)
        {
            T[i][j] = {0,0,0};
        }
    }
    for (long long i = 0; i < k; i++)
    {
        cin >> sx >> sy >> dx >> dy;
        T[dx][dy] = {0,sx,sy};
    }
    T[1][1] = {1,0,0};
    for (long long i = 1; i < m+1; i++)
    {
        for (long long j = 1; j < n+1; j++)
        {
            if (i == 1 && j == 1)
            {
                // cout << T[i][j].p << " " << T[T[i][j].y][T[i][j].x].p << " ";
                continue;
            }
            // T[i][j].p = (T[i][j].p + T[i-1][j].p) % mod;
            // T[i][j].p = (T[i][j].p + T[i][j-1].p) % mod;
            // T[i][j].p = (T[i][j].p + T[T[i][j].x][T[i][j].y].p) % mod;
            // if (T[i][j].x > 0 && T[i][j].y > 0)
            T[i][j].p = ((T[i-1][j].p%mod) + (T[i][j-1].p%mod))%mod;
            T[i][j].p += (T[T[i][j].x][T[i][j].y].p%mod);
            // cout << T[i][j].p << "," << T[i][j].y << "," <<T[i][j].x << "," << T[T[i][j].y][T[i][j].x].p << " ";
            // cout << i << " " << j << " ";
        }
        // cout << "\n";
    }
    cout << T[m][n].p%mod;
    return 0;
}