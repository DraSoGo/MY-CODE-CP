#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,w0;
    cin >> n >> m >> w0;
    long long V[n+1],W[n+1],X[n+1],L[n+1];
    V[0] = 1;
    W[0] = w0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> X[i];
        V[i] = V[i-1]*X[i];
        // cout << V[i] << " ";
    }
    // cout << "\n";
    for (long long i = 1; i <= n; i++)
    {
        cin >> L[i];
        W[i] = (W[i-1]*X[i]) - L[i];
        // cout << W[i] << " ";
    }
    // cout << "\n";
    long long idx = n,sum = 0;
    // for (int i = n; i >= 0; i--)
    // {
    //     while (m >= V[i])
    //     {
    //         m -= V[i];
    //         sum += W[i];
    //     }
    // }
    // cout << sum;
    while (m > 0)
    {
        m -= V[idx];
        sum += W[idx];
        // cout << "+" << V[idx] << " " << W[idx] << " " << m << " " << sum << "\n";
        if (m < 0)
        {
            m += V[idx];
            sum -= W[idx];
            // cout << "-" << V[idx] << " " << W[idx] << " " << m << " " << sum << "\n";
            idx--;
        }
    }
    cout << sum;
}