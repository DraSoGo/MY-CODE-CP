/*
Task: uiiaiouiaio
Author: DraSoGo
*/
#include <bits/stdc++.h>
using namespace std;
const int mxi = 51;
unsigned long long S[mxi + 10];
unsigned long long A[mxi + 10];
vector<string> R = {"", "uii", "aio", "uia", "io"};
char uii(int n, unsigned long long m)
{
    if (n == 1)
    {
        return "uii"[m];
    }
    unsigned long long left = A[n - 1];
    int idx = (n % 4 == 0) ? 4 : (n % 4);
    int rlen = (idx == 4) ? 2 : 3;
    unsigned long long mid = S[n + 1] * rlen;

    if (m < left)
    {
        return uii(n - 1, m);
    }
    else if (m >= left + mid)
    {
        unsigned long long pos = m - left - mid;
        return uii(n - 1, left - 1 - pos);
    }
    else
    {
        unsigned long long offset = m - left;
        return R[idx][offset % rlen];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    S[1] = 0;
    S[2] = 1;
    for (int i = 3; i < mxi; i++)
    {
        S[i] = 2*S[i-1] + S[i-2];
        // cout << S[i] << "\n";
    }
    A[1] = 3;
    for (int i = 2; i < mxi; i++)
    {
        int idx = (i % 4 == 0) ? 4 : (i % 4);
        int rlen = (idx == 4) ? 2 : 3;
        A[i] = 2 * A[i - 1] + S[i + 1] * rlen;
    }

    int T;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << A[i] << "\n";
    //     for (int j = 0; j < A[i]; j++)
    //     {
    //         char ans = uii(i, j);
    //         cout << ans;
    //     }
    //     cout << "\n";
    // }
    
    cin >> T;
    while (T--)
    {
        int lv;
        unsigned long long X;
        cin >> lv >> X;
        X--;
        char ans = uii(lv, X);
        cout << ans << "\n";
    }
    return 0;
}
