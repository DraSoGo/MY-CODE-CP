#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, Q;
    cin >> N >> M >> Q;

    vector<char> hasAll(N + 1, 0);                       // สิทธิ์ทุกหน้า
    vector<unordered_set<int>> page(N + 1);              // สิทธิ์หน้าเดี่ยว

    while (Q--) {
        int type; cin >> type;
        if (type == 1) {
            int x, y; cin >> x >> y;
            page[x].insert(y);                            // O(1) avg.
        } else if (type == 2) {
            int x; cin >> x;
            hasAll[x] = 1;
        } else {                                         // type 3
            int x, y; cin >> x >> y;
            bool ok = hasAll[x] || page[x].count(y);
            cout << (ok ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
