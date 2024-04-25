#include <iostream>
#include <deque>
using namespace std;

long long qs[6000001];
deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> qs[i], qs[i] += qs[i - 1];
    }
    long long ss = 0, ll = 0;
    for (int i = 1; i <= n; ++i)
    {
        while (!dq.empty() && i - dq.front() > m)
        {
            dq.pop_front();
        }
        while (!dq.empty() && qs[dq.back()] >= qs[i])
        {
            dq.pop_back();
        }
        dq.emplace_back(i);
        long long s = qs[i] - qs[dq.front()], l = i - dq.front();
        if (ss < s || (ss == s && ll > l))
        {
            ss = s, ll = l;
        }
    }
    cout << ss << "\n"
         << ll;
}