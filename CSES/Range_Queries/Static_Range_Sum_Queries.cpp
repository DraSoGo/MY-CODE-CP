#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,q,x,y;
    cin >> n >> q;
    long long QS[n+1];
    memset(QS,0,sizeof(QS));
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        QS[i] = QS[i-1]+x;
    }
    while (q--)
    {
        cin >> x >> y;
        cout << QS[y]-QS[x-1] << "\n";
    }
    
    return 0;
}