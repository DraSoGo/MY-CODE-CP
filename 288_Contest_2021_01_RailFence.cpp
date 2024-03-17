#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,y = 0,ch = 0;
    cin >> a;
    string b;
    cin >> b;
    x = b.length();
    char c[a][x];
    memset(c,0,sizeof(c));
    for (int i = 0; i < x; i++)
    {
        c[y][i] = b[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (c[i][j] != '0')
            {
                cout << c[i][j];
            }
        }
    }    
}