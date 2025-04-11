#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
const int LOG = 31; // เพราะ 2^30 > 1e9

int jump[N][LOG]; // jump[i][j] = จากดาว i กระโดด 2^j ครั้งไปไหน

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, q;
    cin >> n >> q;

    // รับ input ดาวที่แต่ละดวงเทเลพอร์ตไป
    for (int i = 1; i <= n; i++) {
        cin >> jump[i][0];
    }

    // เตรียมตาราง jump[i][j] ด้วย Binary Lifting
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            cout << jump[i][j] << " ";
        }
        cout << "\n";
    }
    for (int j = 1; j < LOG; j++) {
        for (int i = 1; i <= n; i++) {
            jump[i][j] = jump[jump[i][j - 1]][j - 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            cout << jump[i][j] << " ";
        }
        cout << "\n";
    }
    // ตอบคำถาม
    while (q--) {
        int x;
        long long k;
        cin >> x >> k;

        for (int j = 0; j < LOG; j++) {
            if ((k >> j) & 1) {
                x = jump[x][j];
            }
        }

        cout << x << '\n';
    }

    return 0;
}
