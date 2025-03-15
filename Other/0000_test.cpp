#include <bits/stdc++.h>
#define en '\n'
#define sp ' '
#define ll long long
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#define st first
#define nd second
#define maxx(a, b) a = max(a, b)
#define minn(a, b) a = min(a, b)
using namespace std;

const int N = 105;
char a[N][N];
int distF[N][N], distQ[N][N];
int fi[] = {2, 2, -2, -2, 1, -1, 1, -1}, fj[] = {1, -1, 1, -1, 2, 2, -2, -2};
int qi[] = {1, 1, 1, 0, 0, -1, -1, -1}, qj[] = {1, 0, -1, 1, -1, 1, 0, -1};
queue<pii> qF, qQ;
int n, m, t, pi, pj;

bool valid(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m && a[i][j] != 'X';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> t;
    memset(distF, -1, sizeof(distF));
    memset(distQ, -1, sizeof(distQ));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'F')
            {
                qF.push({i, j});
                distF[i][j] = 0;
            }
            else if (a[i][j] == 'Q')
            {
                qQ.push({i, j});
                distQ[i][j] = 0;
            }
            else if (a[i][j] == 'P')
            {
                pi = i;
                pj = j;
            }
        }
    while (!qF.empty())
    {
        auto [i, j] = qF.front();
        qF.pop();
        for (int k = 0; k < 8; k++)
        {
            int ni = i + fi[k], nj = j + fj[k];
            if (valid(ni, nj) && distF[ni][nj] == -1)
            {
                qF.push({ni, nj});
                distF[ni][nj] = 1 + distF[i][j];
            }
        }
    }
    while (!qQ.empty())
    {
        auto [i, j] = qQ.front();
        qQ.pop();
        for (int k = 0; k < 8; k++)
        {
            int ni = i + qi[k], nj = j + qj[k];
            if (valid(ni, nj) && distQ[ni][nj] == -1)
            {
                qQ.push({ni, nj});
                distQ[ni][nj] = 1 + distQ[i][j];
            }
        }
    }
    if (distF[pi][pj] == -1 || distQ[pi][pj] == -1)
        cout << -1;
    else if (distF[pi][pj] + t > distQ[pi][pj])
        cout << "Q " << distF[pi][pj] + t - distQ[pi][pj];
    else if (distF[pi][pj] + t == distQ[pi][pj])
        cout << distQ[pi][pj];
    // else if(distF[pi][pj]+t<distQ[pi][pj])
    else
        cout << "F " << distQ[pi][pj] - (distF[pi][pj] + t);
    return 0;
}