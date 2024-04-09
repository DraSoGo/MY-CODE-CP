#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int room[m];
    int num;
    int m_num = 0;
    for (int i = 0; i < m; ++i)
    {
        cin >> room[i];
    }
    int l = 0, r = 1e9, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        cout << l << " " << r << " " << mid << "\n";
        int c = 1, sum = 0;
        for (int i = 0; i < m; ++i)
        {
            if (room[i] > mid)
            {
                c += n;
                break;
            }
            sum += room[i];
            if (sum > mid)
            {
                c++;
                sum = room[i];
            }
            // cout << sum << " " << c << "\n";
        }
        if (c > n)
            l = mid + 1;
        else
            r = mid;
    }
    cout << r;
    return 0;
}