#include <bits/stdc++.h>
using namespace std;
int DP[500001];
deque<pair<int, int>> dq;
int main()
{
    int n, k, val, i;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        cin >> val;
        for(auto j:dq)
        {
            cout << j.second << " :" << j.first << "\n";
        }
        while (!dq.empty() && dq.front().second + k < i)
        {
            // cout << dq.front().second + k << "\n";
            dq.pop_front();
        }
        if (!dq.empty())
        {
            val += dq.front().first;
        }
        DP[i] = val;
        cout << DP[i] << "\n";
        while (!dq.empty() && dq.back().first > val)
        {
            dq.pop_back();
        }
        dq.push_back({DP[i], i});
        for(auto j:dq)
        {
            cout << j.second << " :" << j.first << "\n";
        }
        cout << "---\n";
    }
    cout << DP[n];
}