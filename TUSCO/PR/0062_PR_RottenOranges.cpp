#include <bits/stdc++.h>
using namespace std;

int x,y;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

bool check(int y1,int x1)
{
    if (y1 > y-1 || y1 < 0 || x1 < 0 || x1 > x-1)
    {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int ch = 0,co = 0;
        cin >> y >> x;
        int A[y][x];
        int B[y][x];
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                cin >> A[i][j];
                B[i][j] = A[i][j];
            }
        }
        while (ch == 0)
        {
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < x; j++)
                {
                    if (A[i][j] == 2)
                    {
                        for (int k = 0; k < 4; k++)
                        {
                            if (A[i+dy[k]][j+dx[k]] == 1 && check(i+dy[k],j+dx[k]) == true)
                            {
                                // cout << i+dy[k] << "," << j+dx[k] << " = " << A[i+dy[k]][j+dx[k]] << "\n";
                                B[i+dy[k]][j+dx[k]] = 2;
                            }
                        }
                    }
                }
            }
            // cout << "A\n";
            // for (int i = 0; i < y; i++)
            // {
            //     for (int j = 0; j < x; j++)
            //     {
            //         cout << A[i][j] << " ";
            //     }
            //     cout << "\n";
            // }
            // cout << "\n";
            // cout << "B\n";
            // for (int i = 0; i < y; i++)
            // {
            //     for (int j = 0; j < x; j++)
            //     {
            //         cout << B[i][j] << " ";
            //     }
            //     cout << "\n";
            // }
            // cout << "\n";
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < x; j++)
                {
                    if (A[i][j] != B[i][j])
                    {
                        ch = 2;
                    }
                    if (ch != 2 && A[i][j] == B[i][j])
                    {
                        ch = 1;
                    }
                    A[i][j] = B[i][j];
                }
            }
            if (ch == 2)
            {
                ch = 0;
            }
            //cout << ch << "\n";
            co++;
        }
        int ch1 = 0;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (B[i][j] == 1)
                {
                    cout << -1 << "\n";
                    ch1 = 1;
                    break;
                }
            }
            if (ch1 == 1)
            {
                break;
            }
        }
        if (ch1 == 0)
        {
            cout << co-1 << "\n";
        }
        
    }
}