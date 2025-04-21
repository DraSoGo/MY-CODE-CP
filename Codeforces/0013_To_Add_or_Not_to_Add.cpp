#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, k, ansn = 1, ansc = 0;
    cin >> n >> k;
    long long A[n+1], QS[n+1];
    QS[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    sort(A+1, A+n+1);
    for (int i = 1; i <= n; i++)
    {
        QS[i] = QS[i-1] + A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        long long l = 1, r = i;
        while (l < r)
        {
            long long mid = (l + r) / 2;
            long long len = i - mid + 1;
            long long sum = QS[i] - QS[mid - 1];
            long long cost = len * A[i] - sum;
            if (cost > k)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        long long len = i - l + 1;
        long long sum = QS[i] - QS[l - 1];
        long long cost = len * A[i] - sum;
        if (cost <= k && len > ansc)
        {
            ansc = len;
            ansn = A[i];
        }
    }
    cout << ansc << " " << ansn;
    return 0;
}
