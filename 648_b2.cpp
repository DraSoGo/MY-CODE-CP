#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned long long t,n,q,k;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        unsigned long long A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A,A+n);
        unsigned long long QS[n];
        QS[0] = A[0];
        for (int i = 1; i < n; i++)
        {
            QS[i] = QS[i-1]+A[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> k;
            cout << lower_bound(QS,QS+n,k)-QS << "\n";
        }
        
    }
    return 0;
}