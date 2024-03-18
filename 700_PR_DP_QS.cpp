#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,a,x,y;
    cin >> n;
    int QS[n+1];
    QS[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        QS[i] = a+QS[i-1];
    }
    cout << "\n";
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        cout << QS[y+1]-QS[x] << "\n";
    }
    return 0;
}