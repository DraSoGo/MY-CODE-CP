#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int dr[4] = {-1, 0, 1, 0};   // N,E,S,W
const int dc[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C;
    if (!(cin >> R >> C)) return 0;

    vector<string> g(R);
    for (auto &row : g) cin >> row;

    vector<vector<int>> fire(R, vector<int>(C, INF));   // เวลาที่ไฟจะมาถึงช่องนี้
    queue<pair<int,int>> q;                             // BFS ไฟ (multi-source)
    pair<int,int> S, F;

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            if (g[r][c] == '*') {
                fire[r][c] = 0;
                q.push({r, c});
            } else if (g[r][c] == 'S') {
                S = {r, c};
            } else if (g[r][c] == 'F') {
                F = {r, c};
            }
        }
    }

    /* ---------- 1) BFS คำนวณเวลาไฟลาม ---------- */
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        for (int k = 0; k < 4; ++k) {
            int nr = r + dr[k], nc = c + dc[k];
            if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
            if (g[nr][nc] == '#') continue;             // ไฟทะลุกำแพงไม่ได้
            if (fire[nr][nc] > fire[r][c] + 1) {
                fire[nr][nc] = fire[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }

    /* ---------- 2) BFS เดินผู้เล่น ---------- */
    vector<vector<int>> dist(R, vector<int>(C, INF));
    queue<pair<int,int>> pq;
    dist[S.first][S.second] = 0;

    // ถ้าไฟอยู่ที่ S ตั้งแต่วินาที 0 → หมดสิทธิ์รอด
    if (fire[S.first][S.second] == 0) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    pq.push(S);
    while (!pq.empty()) {
        auto [r, c] = pq.front(); pq.pop();
        int t = dist[r][c];

        if (make_pair(r, c) == F) {          // ถึงทางออกก่อนไฟ
            cout << t << '\n';
            return 0;
        }

        for (int k = 0; k < 4; ++k) {
            int nr = r + dr[k], nc = c + dc[k];
            int nt = t + 1;
            if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
            if (g[nr][nc] == '#') continue;               // กำแพง
            if (nt >= fire[nr][nc]) continue;             // ไฟมาก่อนหรือมาพร้อมกัน
            if (dist[nr][nc] <= nt) continue;             // เคยมาถึงเร็วกว่าแล้ว
            dist[nr][nc] = nt;
            pq.push({nr, nc});
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
