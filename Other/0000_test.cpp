#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    map<long long, int> freq;
    long long l = 0, ans = 0, distinct = 0;

    for (long long r = 0; r < n; ++r)
    {
        if (freq[a[r]] == 0)
            distinct++;
        freq[a[r]]++;

        while (distinct > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
                distinct--;
            l++;
        }

        ans += r - l + 1; // ทุก subarray [l..r], [l+1..r], ..., [r..r]
    }

    cout << ans << "\n";
    return 0;
}
