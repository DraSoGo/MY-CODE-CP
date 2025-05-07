#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+10,sqr = 1e3;
int QS[sqr][sz],A[sz];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,l,m,r;
    cin >> n >> q;
    for (int i = 1; i < n+1; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= sqrt(n); i++)
    {
        for (int j = 1; j <= n; j++)
        {
            QS[i][j] += QS[i][max(0,j-i)] + A[j];
        }
    }
    while (q--)
    {
        cin >> l >> m >> r;
        if (m < sqrt(n))
        {
            r = l+(r-l)/m*m;
            // cout << r << " ";
            cout << QS[m][r] - QS[m][l] + A[l] << " ";
        }
        else
        {
            int sum = 0;
            for (int i = l; i <= r; i+=m)
            {
                sum += A[i];
            }
            cout << sum << " ";
        }
    }
    return 0;
}