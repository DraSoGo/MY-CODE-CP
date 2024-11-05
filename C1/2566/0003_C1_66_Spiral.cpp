/* TASK: Spiral
LANG: C++
AUTHOR: Guntinun Sawatvong
CENTER: WU */ 
#include <bits/stdc++.h>
using namespace std;

int dx0[4] = {1,0,-1,0};
int dy0[4] = {0,1,0,-1};
int dx1[4] = {-1,0,1,0};
int dy1[4] = {0,1,0,-1};
bool T[200][200];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y,a,s,st = 1;
    char c;
    cin >> n >> x >> y >> a >> s >> c;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < st; j++)
        {
            if (x >= 0 && x < n && y >= 0 && y < n)
            {
                T[y][x] = 1;
            }
            if (s == 0)
            {
                x += dx0[i%4];
                y += dy0[i%4];
            }
            if (s == 1)
            {
                x += dx1[i%4];
                y += dy1[i%4];
            }
        }
        st++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (T[i][j] == 1)
            {
                cout  << c;
            }
            else
            {
                cout << '.';
            }
        }
        cout << '\n';
    }
    return 0;
}
/*
8
2 4
6
0
C
*/
/*
10
5 5
10
0
X
*/
/*
10
5 5
10
1
H
*/