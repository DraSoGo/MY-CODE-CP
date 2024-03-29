#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,mx = 0;
    cin >> h >> w;
    int A[h][w+2],ch[h][w+2];
    memset(A,0,sizeof(A));
    memset(ch,0,sizeof(ch));
    for (int i = 0; i < h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 1; i < h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (A[i-1][j] > A[i-1][j-1] && A[i-1][j] > A[i-1][j+1])
            {
                A[i][j] += A[i-1][j];
            }
            else if (A[i-1][j-1] > A[i-1][j] && A[i-1][j-1] > A[i-1][j+1])
            {
                A[i][j] += A[i-1][j-1];
            }
            else
            {
                A[i][j] += A[i-1][j+1];
            }
        }
    }
    for (int i = 0; i < w; i++)
    {
        mx = max(A[h-1][i],mx);
    }
    
    cout << mx;
    return 0;
}
/*
6 5
3 1 7 4 2
2 1 3 1 1
1 2 2 1 8
2 2 1 5 3
2 1 4 4 4
5 7 2 5 1
*/