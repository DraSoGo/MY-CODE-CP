#include <bits/stdc++.h>
using namespace std;

int R,C;
int arr[1001][1001];
int mem[1001][1001][1001];

bool check(int x, int y1, int y2)
{
    return (x >= 0 && x < R && y1 >= 0 && y1 < C && y2 >= 0 && y2 < C);
}
int fmx(int x, int y1, int y2)
{
    if (!check(x, y1, y2))
    {
        return INT_MIN;
    }
    if (x == R - 1 && y1 == 0 && y2 == C - 1)
    {
        return (y1 == y2) ? arr[x][y1] : arr[x][y1] + arr[x][y2];
    }
    if (x == R - 1)
    {
        return INT_MIN;
    }
    if (mem[x][y1][y2] != -1)
    {
        return mem[x][y1][y2];
    }
    int ans = INT_MIN;
    int temp = (y1 == y2) ? arr[x][y1] : arr[x][y1] + arr[x][y2];
    ans = max(ans, temp + fmx(x + 1, y1, y2 - 1));
    ans = max(ans, temp + fmx(x + 1, y1, y2 + 1));
    ans = max(ans, temp + fmx(x + 1, y1, y2));
    ans = max(ans, temp + fmx(x + 1, y1 - 1, y2));
    ans = max(ans, temp + fmx(x + 1, y1 - 1, y2 - 1));
    ans = max(ans, temp + fmx(x + 1, y1 - 1, y2 + 1));
    ans = max(ans, temp + fmx(x + 1, y1 + 1, y2));
    ans = max(ans, temp + fmx(x + 1, y1 + 1, y2 - 1));
    ans = max(ans, temp + fmx(x + 1, y1 + 1, y2 + 1));
    return (mem[x][y1][y2] = ans);
}
int memmx()
{
    memset(mem, -1, sizeof(mem));
    return fmx(0, 0, C - 1);
}
int main()
{
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    cout << memmx();
    return 0;
}