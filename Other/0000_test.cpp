#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    // dp[i]: ผลรวมสูงสุดสำหรับ a[1..i]
    vector<ll> dp(n+1, LLONG_MIN);
    dp[0] = 0;

    // คำนวณ dp
    for(int i = 1; i <= n; i++){
        ll mx = -1, mn = INT_MAX;
        // ลองขอบล่าง j ของช่วงสุดท้าย
        for(int j = i; j >= 1; j--){
            mx = max(mx, a[j]);
            mn = min(mn, a[j]);
            // ถ้าแบ่งก่อนหน้า j-1 ได้ dp[j-1]
            dp[i] = max(dp[i], dp[j-1] + (mx - mn));
        }
    }

    cout << dp[n] << "\n";
    return 0;
}
