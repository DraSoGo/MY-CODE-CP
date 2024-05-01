#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k, x, y, a;
    cin >> n >> k;  
    vector<long long> vec(2000001,INT_MAX);
    pair<long long, long long> XY[n],XY2[k];
    for (long long i = 0; i < n; i++)
    {
        cin >> x >> y;
        XY[i] = {x, y};
    }
    for (long long i = 0; i < k; i++)
    {
        cin >> x >> y;
        XY2[i] = {x, y};
    }
    for (long long i = 0; i < n; i++)
    {
        a = 1;
        long long x = 0;
        for (long long j = 0; j < k; j++)
        {
            if (abs(XY[i].second - XY2[j].second) <= XY2[j].first - XY[i].first)
            {
                y = 1;
            }
            else
            {
                y = 0;
            }
            
            if (y)
            {
                x |= (1 << (j));
            }
        }
        vec[x] = min(vec[x], a);
    }
    for (long long i = 1; i < (1 << k); i++)
    {
        for (long long j = 1; j < (1 << k); j++)
        {
            vec[i | j] = min(vec[i | j], vec[i] + vec[j]);
        }
    }
    cout << n - vec[(1 << k) - 1];
    return 0;
}