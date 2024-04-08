#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, l, r, mid, m, k;
    cin >> n >> m >> k;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    l = 0;
    r = LONG_LONG_MAX;
    while (l <= r)
    {
        mid = (l + r) / 2;
        long long cnt = 0, sum = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(a[i]);
            sum = sum + a[i];
            if (pq.size() < k)
            {
                continue;
            }
            while (pq.size() > k)
            {
                sum = sum - pq.top();
                pq.pop();
            }
            if (sum >= mid)
            {
                // cout<<sum<<" ";
                while (!pq.empty())
                {
                    pq.pop();
                }
                // cout<<sum<<"\n";
                sum = 0;
                cnt++;
            }
        }
        cout << "\n";
        if (cnt >= m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    // cout<<l<<" "<<mid<<" "<<r<<"\n";
    return 0;
}