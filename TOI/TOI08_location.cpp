#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,y,a;
    cin >> y >> x;
    int LOC[y][x],SUMLOC[y][x],ans = 0;
    memset(SUMLOC,0,sizeof(SUMLOC));
    cin >> a;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> LOC[i][j];
        }
    }
    // cout << "----\n";
    SUMLOC[0][0] = LOC[0][0];
    for (int i = 1; i < x; i++)
    {
        SUMLOC[0][i] = SUMLOC[0][i - 1] + LOC[0][i];
    }
    for (int i = 1; i < y; i++)
    {
        SUMLOC[i][0] = SUMLOC[i - 1][0] + LOC[i][0];
    }
    for (int i = 1; i < y; i++)
    {
        for (int j = 1; j < x; j++)
        {
            SUMLOC[i][j] += LOC[i][j] + SUMLOC[i - 1][j] + SUMLOC[i][j - 1] - SUMLOC[i - 1][j - 1];
        }
    }
    for (int i = a; i < y; i++)
    {
        for (int j = a; j < x; j++)
        {
            ans = max(ans,(SUMLOC[i][j] + SUMLOC[i - a][j - a]) - (SUMLOC[i - a][j] + SUMLOC[i][j - a]));
        }
    }
    // for (int i = 0; i < y; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         cout << SUMLOC[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "----\n";
    cout << ans;
}