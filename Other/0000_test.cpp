#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> tasks(n);
    for (int i = 0; i < n; i++) {
        cin >> tasks[i].first >> tasks[i].second; // duration, deadline
    }

    sort(tasks.begin(), tasks.end()); // sort by duration

    long long current_time = 0, reward = 0;
    for (auto [duration, deadline] : tasks) {
        current_time += duration;
        reward += deadline - current_time;
    }

    cout << reward << '\n';
    return 0;
}
