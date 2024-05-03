#include <bits/stdc++.h>
using namespace std;

long long X[600],Y[600],DP[600][600];

long long dis(long long x1,long long y1,long long x2,long long y2)
{
    return abs(x1-x2)+abs(y1-y2);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b,q;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> X[i] >> Y[i];
        DP[0][i] = dis(X[0],Y[0],X[i],Y[i]);
    }
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            DP[i][j] = LLONG_MAX;
            for (int k = 0; k < a; k++)
            {
                DP[i][j] = min(DP[i][j],max(DP[i-1][k],dis(X[j],Y[j],X[k],Y[k])));
            }
        }
    }
    // for (int k = 0; k < a; k++)
    // {
    //     for (int i = 0; i < a; i++)
    //     {
    //         cout << DP[k][i] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";
    long long co = 0;
    for (int i = 0; i < b; i++)
    {
        cin >> q;
        for (int j = 0; j < a; j++)
        {
            if (q >= DP[j][a-1])
            {
                co+=j+1;
                break;
            }
        }
    }
    cout << co;
    return 0;
}