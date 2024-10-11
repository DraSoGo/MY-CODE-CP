#include <bits/stdc++.h>
using namespace std;

int QS[10000000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k,l,x,y,sum;
    cin >> n >> m >> k >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        QS[x]++;
    }
    for (int i = 1; i < 10000000; i++)
    {
        QS[i]+=QS[i-1];
    }
    for (int i = 0; i < k; i++)
    {
        sum = 0;
        y = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            sum += QS[min(x+l,10000000-1)]-QS[max(y,x-l-1)];
            // cout << min(x+l,10000000-1) << " " << max(y,x-l-1) << " :" << QS[min(x+l,10000000-1)]-QS[max(y,x-l-1)] << "\n";
            y = min(x+l,10000000-1);
        }
        cout << sum << "\n";
    }
    return 0;
}