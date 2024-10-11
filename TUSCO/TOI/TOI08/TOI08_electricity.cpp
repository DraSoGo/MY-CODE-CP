#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k,x;
    cin >> n >> k;
    int DP[n],A[n];
    deque <int> idx;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        while (!idx.empty() && idx.front()+k < i)
        {
            idx.pop_front();
        }
        if (!idx.empty())
        {
             A[i] += DP[idx.front()];
        }
        DP[i] = A[i];
        while (!idx.empty() && DP[i] < DP[idx.back()])
        {
            idx.pop_back();
        }
        idx.push_back(i);
    }
    cout << DP[n-1];
    return 0;
}