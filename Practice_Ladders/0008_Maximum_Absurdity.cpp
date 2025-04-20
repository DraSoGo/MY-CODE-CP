#include <bits/stdc++.h>
using namespace std;

struct GUN
{
    long long idx,num;
    bool operator < (const GUN&a)const
    {
        if (num == a.num)
        {
            return idx < a.idx;
        }
        return num > a.num;
    }
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,sumk = 0,a,b,mx = -1;
    cin >> n >> k;
    long long A[n],QS[n-k+1],BR[n-k+1];
    for (long long i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (long long i = 0; i < k; i++)
    {
        sumk += A[i];
    }
    QS[0] = sumk;
    // cout << 0 << " " << sumk << "\n";
    for (long long i = 1; i <= n-k; i++)
    {
        sumk -= A[i-1];
        sumk += A[i+k-1];
        // cout << i << " " << sumk << "\n";
        QS[i] = sumk;
    }
    BR[n-k] = n-k;
    for (int i = n-k-1; i >= 0; i--)
    {
        if (QS[i] >= QS[BR[i+1]])
        {
            BR[i] = i;
        }
        else
        {
            BR[i] = BR[i+1];
        }
    }
    // for (int i = 0; i < n-k+1; i++)
    // {
    //     cout << BR[i] << " ";
    // }
    // cout << "\n";
    for (int i = 0; i <= n-k-k; i++)
    {
        // cout << a+1 << " " << b+1 << " " << mx << "\n";
        if (QS[i] + QS[BR[i+k]] > mx)
        {
            mx = QS[i] + QS[BR[i+k]];
            a = i;
            b = BR[i+k];

        }
    }
    cout << a+1 << " " << b+1;
    return 0;
}