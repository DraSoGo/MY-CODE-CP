#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> sweetness(N), sourness(N);

    for (int i = 0; i < N; ++i) {
        cin >> sweetness[i] >> sourness[i];
    }

    int minFlavor = INT_MAX;

    for (int i = 1; i < (1 << N); ++i) {
        int totalSweetness = 1, totalSourness = 0;

        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                totalSweetness *= sweetness[j];
                totalSourness += sourness[j];
            }
        }

        minFlavor = min(minFlavor, abs(totalSweetness - totalSourness));
    }

    cout << minFlavor << endl;

    return 0;
}
