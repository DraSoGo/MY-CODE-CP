/* TASK: Spiral
LANG: C++
AUTHOR: Guntinun Sawatvong
CENTER: WU */ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, x, y, n, z, chx = 0, chy = 0;
    char a;
    cin >> s >> x >> y >> n >> z >> a;
    char A[s][s];
    memset(A, '.', sizeof(A));
    A[y][x] = a;
    if (z == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j <= i; j++)
                {
                    if (chx % 2 == 0)
                    {
                        x++;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                    else
                    {
                        x--;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                }
                chx++;
            }
            else
            {
                for (int j = 0; j <= i; j++)
                {
                    if (chx % 2 == 0)
                    {
                        y--;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                    else
                    {
                        y++;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                }
            }
            chy++;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j <= i; j++)
                {
                    if (chx % 2 == 0)
                    {
                        x--;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                    else
                    {
                        x++;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                }
                chx++;
            }
            else
            {
                for (int j = 0; j <= i; j++)
                {
                    if (chx % 2 == 0)
                    {
                        y--;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                    else
                    {
                        y++;
                        if (x >= 0 && x < s && y >= 0 && y < s)
                        {
                            A[y][x] = a;
                        }
                    }
                }
            }
            chy++;
        }
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << A[i][j];
        }
        cout << "\n";
    }
}
