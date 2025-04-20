#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<ll> A(n), sum(n - k + 1), best(n - k + 1);
    for (int i = 0; i < n; i++) cin >> A[i];

    // สร้าง sum ของช่วง k ทุกตำแหน่ง
    ll window = 0;
    for (int i = 0; i < k; i++) window += A[i];
    sum[0] = window;
    for (int i = 1; i <= n - k; i++) {
        window += A[i + k - 1] - A[i - 1];
        sum[i] = window;
    }

    // สร้าง best_right[i] คือ index ที่เริ่มช่วง k ที่ให้ค่ามากสุดจาก i ไปทางขวา
    vector<int> best_right(n - k + 1);
    best_right[n - k] = n - k;
    for (int i = n - k - 1; i >= 0; i--) {
        if (sum[i] >= sum[best_right[i + 1]]) best_right[i] = i;
        else best_right[i] = best_right[i + 1];
    }

    // หาคำตอบดีที่สุด
    ll ans = 0;
    int l = 0, r = 0;
    for (int i = 0; i <= n - 2 * k; i++) {
        int j = best_right[i + k];
        if (sum[i] + sum[j] > ans) {
            ans = sum[i] + sum[j];
            l = i;
            r = j;
        }
    }

    cout << l + 1 << " " << r + 1 << "\n";
    return 0;
}
