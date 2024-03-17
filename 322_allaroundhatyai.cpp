#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    int n,mx = 0,sum;
    cin >> n;
    int N[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> N[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x = 0,y = i,sum = 0;
        while (y != n && x != n)
        {
            sum = sum + N[y][x];
            y++;
            x++;
        }
        mx = max(mx,sum);
        
    }
    for (int i = 0; i < n; i++)
    {
        int x = i,y = 0,sum = 0;
        while (y != n && x != n)
        {
            sum = sum + N[y][x];
            y++;
            x++;
        }
        mx = max(mx,sum);
        
    }
    cout << mx;
    return 0;
}