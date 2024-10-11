#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;
int PX[N],CX[N],PY[N],CY[N],QSX[N],QSY[N];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n,q,a,b,k,l,r,mid,z;
    cin >> n >> m >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> PX[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> CX[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> PY[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> CY[i];
    }
    QSX[0] = CX[0],QSY[0] = CY[0];
    for (int i = 1; i < n; i++)
    {
        QSX[i] = QSX[i-1] + CX[i];
    }
    for (int i = 1; i < m; i++)
    {
        QSY[i] = QSY[i-1] + CY[i];
    }
    while (q--)
    {
        cin >> a >> b >> k;
        l = -INT_MAX,r = INT_MAX;
        while (l < r)
        {
            mid = (l+(r-1))/2;
            z = QSX[upper_bound(PX,PX+n,mid)-PX-1] + QSY[upper_bound(PY,PY+m,(mid-b)/a)-PY-1];
            if (z >= k)
            {
                r = mid;
            }
            else
            {
                l = mid+1;
            }
        }
        cout << l << "\n";
    }
    return 0;
}