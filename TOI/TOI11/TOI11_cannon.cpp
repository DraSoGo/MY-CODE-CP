#include <bits/stdc++.h>
using namespace std;

const int sz = 1e7;
int QS[sz];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k,l,x;
    cin >> n >> m >> k >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        QS[x]++;
    }
    for (int i = 1; i < sz; i++)
    {
        QS[i] += QS[i-1];
    }
    for (int i = 0; i < k; i++)
    {
        int sum = 0,y = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            sum += QS[min(sz-1,x+l)]-QS[max(y,x-l-1)];
            y = min(sz-1,x+l);
        }
        cout << sum << "\n";
    }
    return 0;
}