#include <bits/stdc++.h>
using namespace std;

int Q[20][int(2e5+1)];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> Q[0][i];
    }
    for (int i = 1; (1<<i) <= n; i++)
    {
        int s = (1<<(i-1));
        for (int j = 0; j+s < n; j++)
        {
            Q[i][j] = min(Q[i-1][j],Q[i-1][j+s]);
        }
    }
    while (q--)
    {
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        int l = log2(b-a+1);
        cout << min(Q[l][a],Q[l][b-(1<<l)+1]) << "\n";
    }
    return 0;
}