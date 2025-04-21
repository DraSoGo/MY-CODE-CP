#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend()); // เรียงจากมากไปน้อย

    ll ans = 0;
    int index = 0;
    queue<int> q;
    q.push(1); // เริ่มต้นจากขนาด matrix ทั้งหมด

    while (!q.empty()) {
        int count = q.front(); // จำนวนเลขที่ต้องใช้ในระดับนี้
        q.pop();

        for (int i = 0; i < count; i++) {
            ans += A[index++];
        }

        if (count * 4 <= n) {
            q.push(count * 4); // เพิ่มจำนวน submatrix ในระดับถัดไป
        }
    }

    cout << ans << "\n";
    return 0;
}
