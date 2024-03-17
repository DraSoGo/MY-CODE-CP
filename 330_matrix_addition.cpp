#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int X[x][y],Y[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> X[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> Y[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << X[i][j] + Y[i][j] << " ";
        }
        cout << "\n";
    }
    
}