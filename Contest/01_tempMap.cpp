#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,ch,sum;
    cin >> y >> x;
    int N[y + 2][x + 2];
    memset(N,0,sizeof(N));
    for (int i = 1; i < y + 1; i++)
    {
        for (int j = 1; j < x + 1; j++)
        {
            cin >> N[i][j];
        }
    }
    for (int i = 1; i < y + 1; i++)
    {
        for (int j = 1; j < x + 1; j++)
        {
            ch = 0;
            sum = 0;
            if (N[i][j] == 0)
            {
                if ((N[i + 1][j] != 0 && N[i + 1][j] != -1 )|| (N[i - 1][j] != 0 && N[i - 1][j] != -1 ) || (N[i][j + 1] != 0 && N[i][j + 1] != -1 ) || (N[i][j - 1] != 0 && N[i][j - 1] != -1 ))
                {
                    N[i][j] = -1;
                }
            }
            
        }
    }
    for (int i = 1; i < y + 1; i++)
    {
        for (int j = 1; j < x + 1; j++)
        {
            ch = 0;
            sum = 0;
            if (N[i][j] == -1)
            {
                if (N[i + 1][j] != 0)
                {
                    sum = sum + N[i + 1][j];
                    ch++;
                }
                if (N[i - 1][j] != 0)
                {
                    sum = sum + N[i - 1][j];
                    ch++;
                }
                if (N[i][j + 1] != 0)
                {
                    sum = sum + N[i][j + 1];
                    ch++;
                }
                if (N[i][j - 1] != 0)
                {
                    sum = sum + N[i][j - 1];
                    ch++;
                }
                N[i][j] = floor(sum/ch);
            }
            
        }
    }
    for (int i = 1; i < y + 1; i++)
    {
        for (int j = 1; j < x + 1; j++)
        {
            cout << N[i][j] << " ";
        }
        cout << "\n";
    }
    
}