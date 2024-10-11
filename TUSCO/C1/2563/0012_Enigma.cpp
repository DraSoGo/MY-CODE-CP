#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ch = 0;
    string x;
    cin >> a >> b >> x;
    char A[4][2] = {{'A','A'},{'B','D'},{'C','B'},{'D','C'}} 
    ,B[4][2] = {{'A','A'},{'B','C'},{'C','B'},{'D','D'}};
    for (int k = 0; k < a; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (A[i][j] == 'A')
                {
                    A[i][j] = 'D';
                }
                else if (A[i][j] == 'B')
                {
                    A[i][j] = 'A';
                }
                else if (A[i][j] == 'C')
                {
                    A[i][j] = 'B';
                }
                else if (A[i][j] == 'D')
                {
                    A[i][j] = 'C';
                }
            }
        }
        ch++;
        if (ch == 4)
        {
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    if (B[i][j] == 'A')
                    {
                        B[i][j] = 'D';
                    }
                    else if (B[i][j] == 'B')
                    {
                        B[i][j] = 'A';
                    }
                    else if (B[i][j] == 'C')
                    {
                        B[i][j] = 'B';
                    }
                    else if (B[i][j] == 'D')
                    {
                        B[i][j] = 'C';
                    }
                }
            }
            ch = 0;
        }
    }
    for (int i = 0; i < x.length(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (x[i] == A[j][0])
            {
                x[i] = A[j][1];
                break;
            }
        }
        for (int j = 0; j < 4; j++)
        {
            if (x[i] == B[j][0])
            {
                x[i] = B[j][1];
                if (x[i] == 'A')
                {
                    x[i] = 'D';
                }
                else if (x[i] == 'B')
                {
                    x[i] = 'C';
                }
                else if (x[i] == 'C')
                {
                    x[i] = 'B';
                }
                else if (x[i] == 'D')
                {
                    x[i] = 'A';
                }
                break;
            }
        }
        for (int j = 0; j < 4; j++)
        {
            if (x[i] == B[j][1])
            {
                x[i] = B[j][0];
                break;
            }
        }
        for (int j = 0; j < 4; j++)
        {
            if (x[i] == A[j][1])
            {
                x[i] = A[j][0];
                break;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (A[i][j] == 'A')
                {
                    A[i][j] = 'D';
                }
                else if (A[i][j] == 'B')
                {
                    A[i][j] = 'A';
                }
                else if (A[i][j] == 'C')
                {
                    A[i][j] = 'B';
                }
                else if (A[i][j] == 'D')
                {
                    A[i][j] = 'C';
                }
            }
        }
        ch++;
        if (ch == 4)
        {
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    if (B[i][j] == 'A')
                    {
                        B[i][j] = 'D';
                    }
                    else if (B[i][j] == 'B')
                    {
                        B[i][j] = 'A';
                    }
                    else if (B[i][j] == 'C')
                    {
                        B[i][j] = 'B';
                    }
                    else if (B[i][j] == 'D')
                    {
                        B[i][j] = 'C';
                    }
                }
            }
            ch = 0;
        }
    }
    cout << x;
}