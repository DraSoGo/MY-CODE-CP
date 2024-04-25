#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,mx,ans = 0,cnti,cnt = 0;
    deque <long long> DQ;
    cin >> n >> k;
    long long QS[n+1];
    QS[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> QS[i];
        QS[i]+=QS[i-1];
    }
    DQ.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        while (!DQ.empty() && i - DQ.front() > k)
        {
            DQ.pop_front();
        }
        while (!DQ.empty() && QS[i] <= QS[DQ.back()])
        {
            DQ.pop_back();
        }
        DQ.push_back(i);
        cnti = i - DQ.front(),mx = QS[i]-QS[DQ.front()];
        if (mx > ans || (mx == ans && cnti < cnt))
        {
            ans = mx,cnt = cnti;
        }
    }
    cout << ans << "\n" << cnt;
    return 0;
}