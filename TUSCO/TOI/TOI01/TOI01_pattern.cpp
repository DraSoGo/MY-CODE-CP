#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool A[55000][100];
    int n,p,q,r,mx = 0;
    cin >> n;
    memset(A,0,sizeof(A));
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q >> r;
        for (int j = q - 1; j < q + r - 1; j++)
        {
            A[p - 1][j] = 1;
        }
        mx = max(mx,p);
    }
    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < 70; j++)
        {
            if (A[i][j] == 1)
            {
                cout << 'x';
            }
            else
            {
                cout << 'o';
            }
        }
        cout << "\n";
    }
    return 0;
}