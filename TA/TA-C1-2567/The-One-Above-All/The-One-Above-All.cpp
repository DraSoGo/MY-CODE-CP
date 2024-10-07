#include <bits/stdc++.h>
using namespace std;

const long long p = (1e6),md = 1e9+7;
long long PW[p],X[p];
bool P[p];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    P[1] = 1;
    for (long long i = 2; i < p; i++)
    {
        if (P[i] == 0)
        {
            for (long long j = i*i; j < p; j+=i)
            {
                P[j] = 1;
            }
        }
    }
    long long n,k,ans = 1,c;
    long long sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (P[c] == 0)
        {
            sum = sum + c;
        }
    }
    long long l = 60;
    PW[0] = k;
    X[0] = 1;
    for (int i = 1; i < l; i++)
    {
        PW[i] = ((PW[i-1]%md) * (PW[i-1]%md))%md;
        X[i] = 2*X[i-1];
    }
    while (sum > 0)
    {
        for (int i = l-1; i >= 0; i--)
        {
            if (sum == 0)
            {
                break;
            }
            if (X[i] <= sum)
            {
                ans = ((ans%md) * (PW[i]%md))%md;
                sum -= X[i];
            }
        }
    }

    cout << ans;
    return 0;
}
