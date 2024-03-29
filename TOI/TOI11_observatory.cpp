#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, k, s1 = 0, sum,mx = INT_MIN;
    cin >> y >> x >> k;
    int A[y][x], QS0[y+1][x+1], QS1[y+1][x+1],QS2[y+1][x+1],QS3[y+1][x+1];
    memset(QS0, 0, sizeof(QS0));
    memset(QS1, 0, sizeof(QS1));
    memset(QS2, 0, sizeof(QS2));
    memset(QS3, 0, sizeof(QS3));
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i == 1 && j == 1)
            {
                QS0[i][j] = A[i-1][j-1];
            }
            else if (i == 1)
            {
                QS0[i][j] = QS0[i][j-1] + A[i-1][j-1];
            }
            else if (j == 1)
            {
                QS0[i][j] = QS0[i-1][j] + A[i-1][j-1];
            }
            else
            {
                QS0[i][j] = A[i-1][j-1] - QS0[i-1][j-1] + QS0[i-1][j] + QS0[i][j-1];
            }
        }
    }
    for (int i = 1; i <= y; i++)
    {
        for (int j = x-1; j >= 0; j--)
        {
            if (i == 1 && j == x-1)
            {
                QS3[i][j] = A[i-1][j];
            }
            else if (i == 1)
            {
                QS3[i][j] = QS3[i][j+1] + A[i-1][j];
            }
            else if (j == x-1)
            {
                QS3[i][j] = QS3[i-1][j] + A[i-1][j];
            }
            else
            {
                QS3[i][j] = A[i-1][j] + QS3[i-1][j] + QS3[i][j+1] - QS3[i-1][j+1];
            }
        }
    }
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i == 1 && j == 1)
            {
                QS1[i][j] = A[i-1][j-1];
            }
            else if (i == 1)
            {
                QS1[i][j] = QS1[i][j-1] + A[i-1][j-1];
            }
            else if (j == 1)
            {
                QS1[i][j] = A[i-1][j-1];
            }
            else
            {
                QS1[i][j] = A[i-1][j-1] + QS1[i][j-1] + QS1[i-1][j-1] - QS1[i-1][j-2];
            }
        }
    }
    for (int i = 1; i <= y; i++)
    {
        for (int j = x-1; j >= 0; j--)
        {
            if (i == 1 && j == x-1)
            {
                QS2[i][j] = A[i-1][j];
            }
            else if (i == 1)
            {
                QS2[i][j] = QS2[i][j+1] + A[i-1][j];
                //cout << i << "," << j << " = " << QS2[i][j+1] << " + " << A[i-1][j-1] << " = " << QS2[i][j] << "\n";
            }
            else if (j == x-1)
            {
                QS2[i][j] = A[i-1][j];
            }
            else
            {
                QS2[i][j] = A[i-1][j] + QS2[i][j+1] + QS2[i-1][j+1] - QS2[i-1][j+2];
            }
        }
    }
    for (int i = k; i <= y; i++)
    {
        for (int j = k; j <= x; j++)
        {
            sum = QS1[i][j] - QS0[i][j-k] + QS0[i-k][j-k] - QS1[i-k][j-k];
            mx = max(mx,sum);
        }
    }
    for (int i = k; i <= y; i++)
    {
        for (int j = x-k; j >= 0; j--)
        {
            sum = QS2[i][j] - QS2[i-k][j+k] - QS3[i][j+k] + QS3[i-k][j+k];
            //cout << i << "," << j << " = " << sum << "\n";
            mx = max(mx,sum);
        }
    }
    cout << mx;
}