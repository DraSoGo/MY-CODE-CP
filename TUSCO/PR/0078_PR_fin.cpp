#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,ans = INT_MIN,s,e;
    cin >> n;
    long long val[n],QS[n];
    QS[0] = 0;
    for (long long i = 1; i < n; i++)
    {
        cin >> val[i];
        QS[i] = QS[i-1]+val[i];
    }
    for (long long i = 1; i < n; i++)
    {
        for (long long j = 0; j < i; j++)
        {
            if (ans <= QS[i]-QS[j])
            {
                ans = QS[i]-QS[j];
                e = i;
                s = j;
            }
        }
    }
    if (ans > 0)
    {
        cout << s+1 << " " << e+1;
    }
    else
    {
        cout << "no";
    }
    return 0;
}