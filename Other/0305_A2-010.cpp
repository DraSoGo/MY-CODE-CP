#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x,y,mxn = 0;
    cin >> n >> q;
    int QS[n+1],A[n+1],MS[2][n+1];
    stack <pair<int,int>> S;
    QS[0] = 0,A[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        QS[i] = QS[i-1]+y;
        A[i] = A[i-1]+x;
        mxn = max(mxn,A[i]);
    }
    int ANS[mxn];
    memset(ANS,0,sizeof(ANS));
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << QS[i] << " ";
    // }
    // cout << "\n";
    S.push({0,0});
    for (int i = 1; i <= n; i++)
    {
        while (S.top().first >= A[i])
        {
            S.pop();
        }
        MS[0][i] = S.top().second;
        // cout << MS[0][i] << " ";
        S.push({A[i],i});
    }
    // cout << "\n";
    while (!S.empty())
    {
        S.pop();
    }
    S.push({0,n+1});
    for (int i = n; i >= 1; i--)
    {
        while (S.top().first >= A[i])
        {
            S.pop();
        }
        MS[1][i] = S.top().second;
        // cout << MS[1][i] << " ";
        S.push({A[i],i});
    }
    // cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        ANS[A[i]-1] = max(ANS[A[i]-1],QS[MS[1][i]-1]-QS[MS[0][i]]);
    }
    // for (int i = 0; i < mxn; i++)
    // {
    //     cout << ANS[i] << " ";
    // }
    // cout << "\n";
    sort(ANS,ANS+mxn);
    while (q--)
    {
        cin >> x;
        cout << mxn - (lower_bound(ANS,ANS+mxn,x)-ANS) << "\n";
    }
    return 0;
}