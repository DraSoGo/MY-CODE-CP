#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,x1,y1,ch = 0;
    cin >> y >> x;
    char A[y][x];
    int B[y][x];
    memset(B,0,sizeof(B));
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (A[i][j] == 'S')
            {
                ch++;
                B[i][j]++;
                x1 = j;
                y1 = i;
                while (A[y1 + 1][j] != 'X' && y1 + 1 < y)
                {
                    B[y1 + 1][j]++;
                    y1++;
                }
                x1 = j;
                y1 = i;
                while (A[y1 - 1][j] != 'X' && y1 - 1 >= 0)
                {
                    B[y1 - 1][j]++;
                    y1--;
                }
                x1 = j;
                y1 = i;
                while (A[i][x1 + 1] != 'X' && x1 + 1 < x)
                {
                    B[i][x1 + 1]++;
                    x1++;
                }
                x1 = j;
                y1 = i;
                while (A[i][x1 - 1] != 'X' && x1 - 1 >= 0)
                {
                    B[i][x1 - 1]++;
                    x1--;
                }
            }
            
        }
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
}