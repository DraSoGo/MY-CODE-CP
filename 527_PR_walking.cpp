#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,ans = INT_MIN;
    cin >> y >> x;
    int A[y+2][x];
    memset(A,0,sizeof(A));
    for (int i = 1; i <= y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int j = 1; j < x; j++)
    {
        for (int i = 1; i <= y; i++)
        {
            A[i][j] += max(max(A[i][j-1],A[i-1][j-1]),A[i+1][j-1]);
            if (j == x-1)
            {
                ans = max(ans,A[i][j]);
            }
            
        }
    }
    cout << ans;
}