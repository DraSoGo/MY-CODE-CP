#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,co = 0;
    cin >> n >> k;
    long long A[n+1],QS[n+1];
    QS[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        QS[i] = QS[i-1]+A[i];
    }
    long long l = 0,r = 1,sum;
    while (r <= n)
    {
        // cout << l << " " << r << "\n";
        sum = QS[r]-QS[l];
        if (sum == k)
        {
            co++;
            l++,r++;
        }
        else if (sum > k)
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    cout << co;
    return 0;
}