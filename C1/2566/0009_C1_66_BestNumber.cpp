#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,mx = INT_MIN;
    cin >> n;
    int A[n],QS[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            QS[i] = i;
            A[i] = x;
            continue;
        }
        A[i] = A[i-1] + x;
        QS[i] = QS[i-1] + i;
    }
    for (int i = 0; i < n; i++)
    {
        int rn = n-i,sum;
        int idr = lower_bound(QS,QS+n,rn)-QS;
        while (QS[idr]+i-1 >= n)
        {
            idr--;
        }
        if (i-1 < 0)
        {
            sum = A[QS[idr]+i-1];
        }
        else
        {
            sum = A[QS[idr]+i-1]-A[i-1];
        }
        mx = max(mx,sum);
    }
    cout << mx;
    return 0;
}