#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,mn;
    cin >> x >> y;
    int A[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 1; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if(j == 0)
            {
                mn = min(A[j][i-1],A[y-1][i-1]);
            }
            else
            {
                mn = min(A[j][i-1],A[j-1][i-1]);
            }
            A[j][i] += mn;
        }
    }
    mn = INT_MAX;
    for (int i = 0; i < y; i++)
    {
        mn = min(A[i][x-1],mn);
    }
    cout << mn;
}