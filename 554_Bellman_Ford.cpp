#include <bits/stdc++.h>
using namespace std;
int G[1000][3];

void BMF(int s,int n,int e,int d[])
{
    d[s] = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < e; j++)
        {
            int x = G[j][0];
            int y = G[j][1];
            int w = G[j][2];
            if (d[y] > d[x] + w)
            {
                d[y] = d[x] + w;
            }
        }
    }
    for (int j = 0; j < e; j++)
    {
        int x = G[j][0];
        int y = G[j][1];
        int w = G[j][2];
        if (d[y] > d[x] + w)
        {
            cout << "negative weigh cycle";
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << d[i] << "\n";
    }
}

int main()
{
    int n,e,s;
    cin >> n >> e >> s;
    int d[n];
    for (int i = 0; i < n; i++)
    {
        d[i] = INT_MAX;
    }
    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> G[i][j];
        }
    }
    BMF(s,n,e,d);
}
/*
5
8
0
0 1 -1
0 2 4
1 2 3
1 3 2
3 1 1
3 2 5
1 4 2
4 3 -3
*/