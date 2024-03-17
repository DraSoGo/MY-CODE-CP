#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> W(N-1), P(N), C(N);

    for (int i = 0; i < N-1; ++i) {
        cin >> W[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    // คำนวณระยะทางระหว่างเมืองที่ใกล้ที่สุด
    vector<vector<int>> dist(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1, sum = 0; j < N; ++j) {
            sum += W[j - 1];
            dist[i][j] = dist[j][i] = sum;
        }
    }

    // การวิเคราะห์ทุกชุดคำสั่งที่เป็นไปได้ (1 ถึง 2^N - 1)
    int minCost = INT_MAX;
    for (int i = 1; i < (1 << N); ++i) {
        if (__builtin_popcount(i) == M) {
            int cost = 0;
            for (int j = 0; j < N; ++j) {
                if (i & (1 << j)) cost += C[j];
            }
            for (int j = 0; j < N; ++j) {
                if (!(i & (1 << j))) {
                    int minDist = INT_MAX;
                    for (int k = 0; k < N; ++k) {
                        if (i & (1 << k)) minDist = min(minDist, dist[j][k]);
                    }
                    cost += P[j] * minDist;
                }
            }
            minCost = min(minCost, cost);
        }
    }

    cout << minCost << endl;

    return 0;
}
