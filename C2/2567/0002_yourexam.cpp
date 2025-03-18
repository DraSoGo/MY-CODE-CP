#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+1;
long long MSS[sz],QS[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,q,x,sum = 0;
    // fill(MSS,MSS+sz,LLONG_MIN);
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        sum = max(x,sum+x);
        MSS[i] = max(sum,MSS[i-1]);
        QS[i] = QS[i-1]+MSS[i];
        // cout << i << ":" << QS[i] << "\n";
    }
    // cout << "\n";
    cin >> q;
    while (q--)
    {
        cin >> x;
        if (x <= n+1)
        {
            if (x-1-k < 0)
            {
                cout << QS[x-1];
            }
            else
            {
                cout << QS[x-1]-QS[x-1-k];
            }
        }
        else
        {
            cout << QS[n]-QS[n-k];
        }
        cout << "\n";
    }
    return 0;
}