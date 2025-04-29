#include <bits/stdc++.h>
using namespace std;

struct pos
{
    long long a,b,idx;
    bool operator < (const pos & x)const
    {
        if (a == x.a)
        {
            return b < x.b;
        }
        return a < x.a;
    }
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,b;
    cin >> n;
    long long A[n],B[n],IDX[n];
    pos P[n];
    pair <bool,bool> ANS[n];
    memset(ANS,0,sizeof(ANS));
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        P[i] = {a,b,i};
    }
    sort(P,P+n);
    for (int i = 0; i < n; i++)
    {
        A[i] = P[i].a;
        B[i] = P[i].b;
        IDX[i] = P[i].idx;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << B[i] << " ";
    // }
    // cout << "\n";
    for (int i = 0; i < n-1; i++)
    {
        long long idxi = lower_bound(A,A+n,A[i])-A;
        for (long long j = i + 1; j < n; j++)
        {
            if (A[i] <= A[j] && B[j] <= B[i])
            {
                ANS[IDX[i]].first = 1;
                ANS[IDX[j]].second = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ANS[i].first << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ANS[i].second << " ";
    }
    return 0;
}